#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
int maxSubarraySum(int arr[], int n){
        
        // Your code here
        int max_sum = arr[0]; int sum = 0;
        for (int i=0;i<n;i++)
        {
            sum+=arr[i];
            max_sum = max(max_sum,sum);
            if(sum<0)
             sum=0;
        }
        return max_sum;
        
    }
};

int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        cout<<ob.maxSubarraySum(arr,n)<<endl;
    }
    return 0;
}   