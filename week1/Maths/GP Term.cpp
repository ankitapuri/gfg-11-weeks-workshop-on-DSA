#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
        //Complete this function
    double termOfGP(int A,int B,int N)
    {
        //Your code here
        if(N==1)return A;
        if(N==2)return B;
        double r = double(B)/A;
        
        double x = A*pow(r,N-1);
        return x;
    }
};

int main()
{
    int T;
    cin>>T;
    for(int i=0;i<T;i++)
    {
        int A,B,N;
        cin>>A>>B>>N;
        Solution ob;
        cout<<floor(ob.termOfGP(A,B,N))<<endl;
    }
    return 0;
}