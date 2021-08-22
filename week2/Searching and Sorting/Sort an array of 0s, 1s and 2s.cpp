#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
    void sort012(int arr[] , int n)
    {
        int i,cnt0=0,cnt1=0,cnt2=0;
        for(i=0;i<n;i++)
        {
            switch(arr[i])
            {
                case 0:
                    cnt0++;
                    break;
                case1:
                    cnt1++;
                    break;
                case 2:
                    cnt2++;
                    break;
            }
        }
    // Update the array
    i = 0;
 
    while (cnt0 > 0) {
        arr[i++] = 0;
        cnt0--;
    }
 
    while (cnt1 > 0) {
        arr[i++] = 1;
        cnt1--;
    }
 
    
    while (cnt2 > 0) {
        arr[i++] = 2;
        cnt2--;
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
        int a[n];
        for(int i=0;i<n;i++)
          cin>>a[i];
        Solution ob;
        ob.sort012(a,n);
        for(int i=0;i<n;i++)
          cout<<a[i]<<" ";
    cout<<endl;
    }
    return 0;
}