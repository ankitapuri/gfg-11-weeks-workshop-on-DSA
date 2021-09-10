#include<bits/stdc++.h>
using namespace std;

void repeating_missing(int arr[],int n)
{
    for(int i=0;i<n;i++)     
    {
        if(arr[abs(arr[i])-1]>0)    //if element is positive
          arr[abs(arr[i])-1] = -arr[abs(arr[i])-1];  //if the number is positive, make it negative
        else
           cout<<"The repeating element: "<<abs(arr[i])<<endl;  //if the number is negative, print it
    }
    for(int i=0;i<n;i++)
   {
       if(arr[i]>0)   //if the number is positive, print it
        cout<<"The missing element: "<<i+1<<endl;   //i+1 because the array index starts from 0
   }
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
      cin>>arr[i];
    repeating_missing(arr,n);
    return 0;
}