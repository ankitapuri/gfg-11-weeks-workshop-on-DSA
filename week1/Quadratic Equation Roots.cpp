#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    vector<int> quadraticRoots(int a, int b, int c) {
        // code here
        vector<int>vec;
        if(a==0) vec.push_back(-1);
        int d = (b*b)-(4*a*c);
        double sqrt_val = sqrt(abs(d));
        
        if(d>0)
        {
            float ans1 = (-b+sqrt_val)/(2*a);
            float ans2 = (-b-sqrt_val)/(2*a);
            vec.push_back(floor(ans1));
            vec.push_back(floor(ans2));
            sort(vec.begin(), vec.end());
            reverse(vec.begin(),vec.end());
        }
        
       else if(d==0)
        {
            int  ans = -(b)/(2*a);
            vec.push_back(ans);
             vec.push_back(ans);
        }
        else{
            cout<<"Imaginary";
        }
        return vec;
    }
};
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        Solution ob;
        vector<int>roots = ob.quadraticRoots(a,b,c);
        if(roots.size()==1 && roots[0]==-1)
        {
            cout<<"Imaginary";
        }
        else{
            for(int i=0;i<roots.size();i++)
            {   
                cout<<roots[i]<<" ";
                cout<<endl;
            }
        }
    }
    return 0;
}