#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    bool prime(int n)
    {
        if(n<2) return false;
        for (int i=2;i<=sqrt(n);i++)
        {
            if(n%i==0) return false;
        }
        return true;
    }
    int exactly3Divisors(int n)
    {
        int cnt=0;
       if(n <= 3) return 0;
       for(int i=2;i*i<=n;i++)
       {
           if(prime(i)==true)
           cnt++;
       }
       return cnt;
       
    }
};

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout<<ob.exactly3Divisors(N)<<endl;
    }
    return 0;
}