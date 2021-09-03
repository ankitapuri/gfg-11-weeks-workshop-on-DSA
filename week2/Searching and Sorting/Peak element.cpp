#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    int peakElement(int arr[], int n)
    {
       int start = 0;
       int end = n-1;
       while(start<end)
       {
           int mid = (start+end)/2;
           
              if(arr[mid-1]<=arr[mid] && arr[mid+1]<=arr[mid])
               return mid; 
              else if (arr[mid-1]>arr[mid])
                end = mid -1;
                else
                 start = mid+1;
           
       
             
       }
    }
};

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n],temp[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            temp[i] = a[i];
        }
        bool f = 0;
        Solution ob;
        int A = ob.peakElement(temp,n);

        if(A<0 and A>=n)
          cout<<0<<endl;
        else
         {
             if(n==1 and A==0)
             f=1;
             else if(A==0 and a[0]>=a[1])
             f=1;
             else if(A==n-1 and a[n-1]>=a[n-2])
             f=1;
             else if(a[A]>=a[A-1] and a[A]>=a[A+1])
             f=1;
             else 
             f=0;
             cout<<f<<endl;
         }
    }
    return 0;
}