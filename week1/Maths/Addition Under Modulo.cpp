#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
        long long sumUnderModulo(long long a,long long b)
    {
        // code here
       long long sum = 0;
       long long n = 1000000007;
       sum = ((a%n)+(b%n))%n;
       return sum;
    }
};

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        long long a,b;
        cin>>a>>b;
        Solution ob;
        cout<<ob.sumUnderModulo(a,b)<<endl;
    }
    return 0;
}