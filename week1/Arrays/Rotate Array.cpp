// Time Complexity ---> O(n)
// Space Complexity ---> O(d)
#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    
    //Function to rotate an array by d elements in counter-clockwise direction. 
    void rotateArr(int arr[], int d, int n){
        // code here
        int temp[d];
        for(int i=0;i<d;i++)
        {
            temp[i]=arr[i];
            
        }
        for(int i=0;i<n-d;i++)
        {
            arr[i]=arr[i+d];
        }
        for(int i=0;i<d;i++)
        {
            arr[i+n-d]=temp[i];
        }
    }
};
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,d;
        cin>>n>>d;
        int arr[n];
        for(int i=0;i<n;i++)
          cin>>arr[i];
        Solution ob;
        ob.rotateArr(arr,d,n);
        for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}