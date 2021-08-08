#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
     vector<int>subarraySum(int arr[],int n,int s)
     {
         int curr_sum = 0;
         for(int i=0;i<n;i++)
         {
             int j=i;
             while(curr_sum<s){
                 curr_sum+=arr[j];
                 j++;
             }
             if(curr_sum==s)
             return vector<int>{i+1,j};
             else
             curr_sum=0;
         }
         return vector<int>{-1};
     }
};

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        long long s;
        cin>>n>>s;
        int arr[n];
        for(int i=0;i<n;i++)
        cin>>arr[i];
        Solution ob;
        vector<int>res;
        res = ob.subarraySum(arr,n,s);
        for(int i=0;i<res.size();i++)
        cout<<res[i]<<" ";
        cout<<endl;
    }
    return 0;
}