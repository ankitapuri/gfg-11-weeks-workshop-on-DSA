#include<bits/stdc++.h>
using namespace std;

class Solution{
  public:
    long long int floorSqrt(long long int x)   // best approach ---> time complexity is O(log(x))
    {
        // Your code goes here 
        if(x==0 || x==1) return x;
        int start = 1;
        int end = x;
        long long int ans;
        while(start<=end)
        {
            int mid = (start+end)/2;
            if(mid*mid == x) return mid;
            if(mid <= x / mid) 
            {start = mid+1;
              ans = mid;
            }
            else
               end = mid-1;
        }
      return ans;  
    }
    int squareRoot(int x)    // naive approach ---> time complexity is O(sqrt(n))
    {
        for(int i=1;i<=x;i++)
        {
            if(i*i==x) return i;
            if(i*i>x) return i-1;
        }
    }
};

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        Solution obj;
        cout<<obj.floorSqrt(n)<<endl;
        cout<<obj.squareRoot(n)<<endl;
    }
    return 0;
}