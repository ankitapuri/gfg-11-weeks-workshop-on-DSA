#include<bits/stdc++.h>
using namespace std;
#define R 4
#define C 4
int count_no_of_1s(bool arr[])
{
    int l = 0, r = C-1;
    while(l<=r)
    {
        int mid = (l+r)/2;
        if(arr[mid]==1 && (arr[mid-1]==0 || mid==0))
            return mid;
        else if (arr[mid]==0)  l=mid+1;
        else r=mid-1;
    }
    return -1;
}
int rowWithMax1s(bool mat[R][C])   // Naive approach  T.C. ---> O(RLogC)
{
  int ans = 0;
  int max_count_1 = 0;
  int index = 0;
  for(int i=0;i<R;i++)
  {
      index = count_no_of_1s(mat[i]);
      if (index== -1) continue;
      int count = C-index;
      if(count>max_count_1)
      {
          max_count_1 = count;
          ans=i;
      }
  }
  return ans;    
}
int rowWithMax1s_optimized(bool mat[R][C])
{
    int max_row_index = 0;
    int curr_col = C-1;   // Initialize the current column to the last column
    for(int i=0;i<R;i++)   // Iterate over the rows
    {
        while(curr_col>=0 &&mat[i][curr_col]==1)   // If the current column is 1, then decrement the current column
        {
            curr_col--;   // Decrement the current column
            max_row_index = i;    // Update the max row index
        }
    }
    return max_row_index;
}
int main()
{
    bool mat[R][C];
    for(int i=0;i<R;i++)
    {
        for(int j=0;j<C;j++)
        {
            cin>>mat[i][j];
        }
    }
    cout << "Index of row with maximum 1s is " << rowWithMax1s(mat) << endl;
    cout << "Index of row with maximum 1s is " << rowWithMax1s_optimized(mat) << endl;
}