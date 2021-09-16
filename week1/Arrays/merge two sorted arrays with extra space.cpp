// T.C ---> O(n)
// S.C ---> O(n)
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void merge(long long arr1[],long long arr2[],int n,int m)
    {
        int i=0, j=0;
        vector<int>vec;
        while(i<n || j<m)
        {
            if(arr1[i]<arr2[j])
            {
                vec.push_back(arr1[i]);
                i++;
            }
            if(arr1[i]>arr2[j])
            {
                vec.push_back(arr2[j]);
                j++;
            }
        }
        for(int i=0;i<n;i++)
        {
            arr1[i]=vec[i];
        }
        for(int i=0;i<m;i++)
        {
            arr2[i]=vec[i+n];
        }
    }
        
};
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int n,m;
        cin>>n>>m;
        long long arr1[n],arr2[m];
        for(int i=0;i<n;i++)
          cin>>arr1[i];
        for(int i=0;i<m;i++)
         cin>>arr2[i];
        Solution ob;
        ob.merge(arr1,arr2,n,m);
        for(int i=0;i<n;i++)
          cout<<arr1[i]<<" ";
        for(int i=0;i<m;i++)
           cout<<arr2[i]<<" ";
        cout<<endl;
    }
    return 0;
}