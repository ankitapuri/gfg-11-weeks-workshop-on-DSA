// T.C. -----> O(n*log(n))    S.C. -----> O(1)
#include<bits/stdc++.h>
using namespace std;

int maximum_toys(int cost[], int n, int k)
{
    sort(cost, cost+n);    // T.C  ---- O(n*log(n))
    if(n==0 || k==0)   // base case
      return 0;
      int ans=0;
      int i=0;
      while(i<n && k>= cost[i])
      {
          ans++;
          k = k - cost[i];
          i++;
      }
      return ans;
}

int main()
{
    int n,k;
    cin>>n>>k;
    int cost[n];
    for(int i=0;i<n;i++)
       cin>>cost[i];
    cout<<maximum_toys(cost,n,k);
    return 0;
}