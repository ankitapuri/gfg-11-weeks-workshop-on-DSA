#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    //Function to return the position of the first repeating element.
    int firstRepeated(int arr[], int n) {
        vector<int> vec(1000000,0);
        int min = -1;
        for(int i=0;i<n;i++)
        {
            if(vec[arr[i]]==0)
            vec[arr[i]] = i+1;// inserting index of 1st occurence of element at that number
            else{
                if(min==-1)
                min = vec[arr[i]];
                else{
                    if(vec[arr[i]]<=min)
                    min = vec[arr[i]];
                }
            }
            
        }
        return min;
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
        Solution ob;
        cout<<ob.firstRepeated(arr,n)<<endl;
    }
    return 0;
}