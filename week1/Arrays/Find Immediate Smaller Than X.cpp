#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    // User function to complete
    // arr[]: input array
    // n: size of array
    // k: find element smaller and closest to it. 
    int immediateSmaller(int arr[], int n, int x)
    {
        // your code here
        //store -1 in small variable then check every element if its smaller than x then compare it with min 
        int small = -1;
        for(int i=0;i<n;i++)
        {
            if(arr[i]<x and small<arr[i])
             small = arr[i];
        }
        return small;
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
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int x;
        cin>>x;
        Solution ob;
        cout<<ob.immediateSmaller(arr, n, x)<<endl;
    }
    return 0;
}