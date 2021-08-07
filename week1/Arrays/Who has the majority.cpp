#include<bits/stdc++.h>
using namespace std;

class Solution{
  public:
    // Function to find element with more appearances between two elements in an
    // array.
    int majorityWins(int arr[], int n, int x, int y) {
        // code here
      
        int a = count(arr,arr+n,x);
        int b = count(arr,arr+n,y);
        if(a>b)return x;
        else if (a<b) return y;
        else{
            if(x>y) return y;
            else 
              return x;
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
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        int x,y;
        cin>>x>>y;
        Solution obj;
        cout<<obj.majorityWins(arr,n,x,y)<<endl;
    }
    return 0;
}