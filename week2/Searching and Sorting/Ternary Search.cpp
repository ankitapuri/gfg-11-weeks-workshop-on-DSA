#include<bits/stdc++.h>
using namespace std;
int ternary_search(int arr[],int n,int x)
{
    int l=0 , r=n-1;
    while(l<=r)
    {
        int mid1 = l+(r-l)/3;
        int mid2 = r-(r-l)/3;
        if(arr[mid1]==x) return mid1;
        if(arr[mid2]==x) return mid2;
        if(arr[mid1]>x) r= mid1-1;  //key lies in b/w l and mid1
        else if(arr[mid2]<x) l=mid2+1; //key lies in b/w mid2 and r
        else{
            l=mid1+1;
            r=mid2-1;
        }
    }
    return -1;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
      cin>>arr[i];
    int x;
    cin>>x;
    cout<<"The index is : "<<ternary_search(arr,n,x)<<endl;
    return 0;
}