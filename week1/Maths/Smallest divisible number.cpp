#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:

    long long getSmallestDivNumber(long long n)
    {
         long long ans = 1;
        for(long long int i=1;i<=n;i++)
        {
            ans = (ans*i)/(__gcd(ans,i));
        }
        return ans;
    }
};
    int main()
    {
        int t;
        cin>>t;
        while(t--)
        {
            int n;
            cin>>n;
            Solution ob;
            cout<<ob.getSmallestDivNumber(n)<<endl;
        }
        return 0;
    }