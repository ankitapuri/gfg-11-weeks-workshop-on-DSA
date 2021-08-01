#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    
    //You need to complete this function
    double cToF(int C)
    {
        //Your code here
        double temp = 0.0;
        temp = (9*C)/5+32;
        return temp;
    }
};

int main()
{
    int T;
    int C,F;
    cin>>T;
    while(T--){
        cin>>C;
        Solution ob;
        cout<<floor(ob.cToF(C))<<endl;
    }
    return 0;
}
