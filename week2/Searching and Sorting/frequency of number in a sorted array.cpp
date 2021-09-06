#include<bits/stdc++.h>
using namespace std;

int first_occ(int arr[],int n,int x)
{
    int l=0,r=n-1;
    while(l<=r)
    {
        int mid=(l+r)/2;
        if(arr[mid]==x && (mid==0||arr[mid-1]!=x)) return mid;
        else if(arr[mid]<x) l=mid+1;
        else r = mid-1;
    }
    return -1;
}
int last_occ(int arr[],int n,int x)
{
    int l=0,r=n-1;
    while(l<=r)
    {
        int mid=(l+r)/2;
        if(arr[mid]==x && (mid==n-1||arr[mid+1]!=x)) return mid;
        else if(arr[mid]<x) l=mid+1;
        else r = mid-1;
    }
    return -1;
}

void freq_count(int arr[],int n,int x)
{
    int first_occurence = first_occ(arr,n,x);
    int last_occurence = last_occ(arr,n,x);
    int count = last_occurence - first_occurence + 1;
    cout<<count<<endl;
}
int main()
{
    int n;
    cin>>n;
    int x;
    cin>>x;
    int arr[n];
    for(int i=0;i<n;i++)
      cin>>arr[i];
    freq_count(arr,n,x);
}