#include<iostream>
using namespace std;

class Solution{
    public:
    //Complete this function
    int modInverse(int a, int m)
    {
        for(int i=0;i<m;i++)
        {
            if((i*a)%m==1) 
            return i;
        }
        return -1;
    
        
    }
    
};

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int a,m;
        cin>>a>>m;
        Solution ob;
        cout<<ob.modInverse(a,m)<<endl;
    }
    return 0;
}