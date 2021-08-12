// Naive Approach

#include<bits/stdc++.h>
using namespace std;

class Solution{

    // Function to find the trapped water between the blocks.
    public:
    int find_leftmax(int arr[],int n ,int i)
    {
        int Lmax = 0;
        for(int j=0;j<=i;j++)
        {
         Lmax = max(Lmax,arr[j]);   
        }
        return Lmax;
    }
    int find_rightmax(int arr[],int n ,int i)
    {
        int Rmax = 0;
        for(int j=n-1;j>=i;j--)
        {
         Rmax = max(Rmax,arr[j]);   
        }
        return Rmax;
    }
    int trappingWater(int arr[], int n){
        // Code here
        int total_water = 0;
        for(int i=1;i<n-1;i++)
        {
            int left_max = find_leftmax(arr,n,i);
            int right_max = find_rightmax(arr,n,i);
            total_water+= min(left_max,right_max)-arr[i];
        }
        return total_water;
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
          cin>>arr[i];
        Solution obj;
        cout<<obj.trappingWater(arr,n)<<endl;
    }
    return 0;
}
