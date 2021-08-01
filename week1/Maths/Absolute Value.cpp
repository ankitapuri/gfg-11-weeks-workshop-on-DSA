#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
        int absolute(int I) {
        // Your code goes here
        return abs(I);
    }
};

int main(){
    int T;
    cin>>T;
    while(T--){
        int I;
        cin>>I;
       Solution ob;
       cout<<ob.absolute(I)<<endl;
    }
    return 0;
}
