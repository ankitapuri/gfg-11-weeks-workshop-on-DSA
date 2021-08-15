#include<bits/stdc++.h>
using namespace std;

int transitionPoint(int arr[],int n);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n],i;
        for(i=0;i<n;i++)
            cin>>a[i];
        int ans=transitionPoint(a,n);
     cout<<transitionPoint(a,n)<<endl;
}
return 0;   
}

int transitionPoint(int arr[], int n) {
    // code here
    if (arr[0]==1) return 0;
    for(int i=0;i<n;i++)
    {
        for(int i=0;i<n;i++)
        {
            if(arr[i]==0 && arr[i+1]==1)
            return (i+1);
        }
       
    }
     return -1;
    
}