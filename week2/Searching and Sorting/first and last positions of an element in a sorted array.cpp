#include<bits/stdc++.h>
using namespace std;

int first_occ(int arr[], int n, int x)
{
    int start = 0, end=n-1;
    while(start<=end)
    {
        int mid=(start+end)/2;
        if(arr[mid]==x  &&(mid==0 ||arr[mid-1]!=x)) return mid;
        else if (arr[mid]>x) end = mid-1;
        else start= mid+1;
    }
    return -1;
}
int last_occ(int arr[], int n, int x)
{
    int start = 0, end=n-1;
    while(start<=end)
    {
        int mid=(start+end)/2;
        if(arr[mid]==x  &&(mid==n-1 ||arr[mid+1]!=x)) return mid;
        else if (arr[mid]>x) end = mid-1;
        else start= mid+1;
    }
    return -1;
}
void first_and_last_occ(int arr[],int n,int x)
{
    cout<<"First occurence : "<<first_occ(arr,n,x)<<endl;
    cout<<"Last occurence : "<<last_occ(arr,n,x)<<endl;
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
    first_and_last_occ(arr,n,x);
}
