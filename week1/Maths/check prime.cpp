#include<bits/stdc++.h>
using namespace std;
bool simple_approach(int n)   // time complexity - O(n)
{
    if(n<2) return false;
    else{
        for(int i=2;i<n;i++)
        {
            if(n%i==0) return false;
        }
    }
    return true;
}
bool better_approach(int n)      // time complexity - O(n)
{
    if(n<2) return false;
    else{
        for(int i=2;i<n/2;i++)
        {
            if(n%i==0) return false;
        }
    }
    return true;
}

bool best_approach(int n)      // time complexity - O(sqrt(n))
{
    if(n<2) return false;
    else{
        for(int i=2;i<sqrt(n);i++)
        {
            if(n%i==0) return false;
        }
    }
    return true;
}

int main()
{
    int n;
    cin>>n;
    cout<<"Ans by simple approach : "<<simple_approach(n)<<endl;
    cout<<"Ans by better approach : "<<better_approach(n)<<endl;
    cout<<"Ans by better approach : "<<best_approach(n)<<endl;
}