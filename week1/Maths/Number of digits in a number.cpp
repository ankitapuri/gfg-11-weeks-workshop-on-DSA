#include<bits/stdc++.h>
using namespace std;

int simple_approach(int n)     // time complexity - O(DigitsCount)
{
    int cnt = 0;
    int k =0;
    while(n>0)
    {
        k=n%10;
        n/=10;
        cnt++;
    }
    return cnt;
}

int better_approach(int n)    // time complexity - O(1)
{
    return (log10(n)+1);
}
int main()
{
    int n;
    cin>>n;
    cout<<"Ans by simple approach : "<<simple_approach(n)<<endl;
    cout<<"Ans by better approach : "<<better_approach(n)<<endl;
}