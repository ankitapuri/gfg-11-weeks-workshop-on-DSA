
#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    
    //Function to rotate an array by d elements in counter-clockwise direction. 
    void rotateArr(int arr[], int d, int n){       // Time Complexity ---> O(n)      // Space Complexity ---> O(d)
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
    void rotate(int arr[],int n)
    {
        int temp = arr[0];
        for(int i=0;i<n;i++)
        {
            arr[i]=arr[i+1];
        }
        arr[n-1]=temp;
    }
    void rotateArrWithoutExtraSpace(int arr[], int d, int n )  // Time Complexity ---> O(n*d)      // Space Complexity ---> O(1)
    {
        for(int i=0;i<d;i++)
        {
            rotate(arr,n);
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