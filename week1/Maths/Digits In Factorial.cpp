#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    
    int digitsInFactorial(int n)
    {
        // code here
        if(n<0) return 0;
        if(n<=1) return 1;
        double x = ((n*log10(n/M_E)+log10(2*M_PI*n)/2.0));
        return floor(x)+1;
       
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
        cout<<ob.digitsInFactorial(N)<<endl;
    }
    return 0;
}