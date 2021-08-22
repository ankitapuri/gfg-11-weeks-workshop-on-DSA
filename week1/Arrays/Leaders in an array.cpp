#include<bits/stdc++.h>
using namespace std;

class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int a[], int n){
        // Code here
        vector<int>vec;
        reverse(a,a+n);
        int max_ele = a[0];
        for(int i=0;i<n;i++)
        {
            if(a[i]>=max_ele)
            {
                vec.push_back(a[i]);
                max_ele = a[i];
            }
        }
        reverse(vec.begin(),vec.end());
      return vec;  
    }
};

int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        int a[n];
        for(long long i=0;i<n;i++)
        {
            cin>>a[i];
        }
        Solution obj;
        vector<int>vec = obj.leaders(a,n);
        for(auto it = vec.begin();it!=vec.end();it++)
        {
            cout<<*it<<" ";
        }
        cout<<endl;
    }
    return 0;
}