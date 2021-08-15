#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
int equilibriumPoint(long long a[], int n) {
    
        // Your code here
        long long sum = 0;
        for(int i=0;i<n;i++)
        {
            sum = sum + a[i];
        }
        long long left = 0;
        long long curr = 0;
        long long right = sum;
        for(int i=0;i<n;i++)
        {
            left+=curr;
            curr=a[i];
            right-=a[i];
            if(left==right)
             return i+1;
        }
        return -1;
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
        long long a[n];
        for(long long i=0;i<n;i++)
         cin>>a[i];
        Solution ob;
        cout<<ob.equilibriumPoint(a,n)<<endl;
    }
    return 0;
}