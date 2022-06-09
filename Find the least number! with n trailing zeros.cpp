#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution
{
    public:
        int findNum(int n)
        {
          
          int lo=1,hi=50000;
          int fans=-1;
          while(lo<=hi)
          {
              int mid=(lo+hi)/2;
              
              int ans=0;
              int p=5;
              int x=mid;
              int t=x/p;
             
              while(t)
              {
                  ans+=t;
                  p*=5;
                  t=x/p;
              }
              
              
              if(ans>=n)
              {hi=mid-1;fans=mid;}
              else
              {lo=mid+1;}
          }
          
          
          return fans;
          
        }
};

// { Driver Code Starts.


int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        Solution ob;
        cout <<ob.findNum(n) << endl;
    }
return 0;
}  // } Driver Code Ends
