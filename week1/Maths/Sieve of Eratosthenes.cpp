 // time complexity --- O(n*log(logn))
#include<bits/stdc++.h>
using namespace std;
void SieveofEratosthenes(int n)
{
  bool prime[n+1];
  memset(prime,true,sizeof(prime));
  for(int i=2;i<=sqrt(n);i++)   // taking the numbers for whom we have to check the multiples and make them false
  {
      if(prime[i]==true)
      {
        for(int j=i*2;j<=n;j+=i)   // multiples of i 
        {
           prime[j] = false;    // setting those to false
        }
      }
  }
  for(int i=2;i<n;i++)
  {
      if(prime[i]==true)  //checking if the integer is true(prime)
      cout<<i<<" ";        // print all prime numbers
  }
}
int main()
{
    int n;
    cin>>n;
    SieveofEratosthenes(n);
}