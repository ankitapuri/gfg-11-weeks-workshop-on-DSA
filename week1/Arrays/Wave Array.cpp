#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

void covertTOWave(vector<int>&arr, int n)
{
    for(int i=0;i<n;i+=2)
        {
            int left = i;
            int right = min(i+1,n-1);
            while(left<right)
            {
                swap(arr[left],arr[right]);
                left++;
                right--;
            }
        }
        
}
};

int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        vector<int>arr(n);
        for(int i=0;i<n;i++)
            cin>>arr[i];
        Solution ob;
        ob.covertTOWave(arr,n);
        for(int i=0;i<n;i++)
            cout<<arr[i]<<" ";
        cout<<endl;
    }
    return 0;
}