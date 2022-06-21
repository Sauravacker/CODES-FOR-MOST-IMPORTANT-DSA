// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int maximumPath(int n, vector<vector<int>> mat)
    {
        
        vector<vector<int>> dp;
        vector<int> v;for(int i=0;i<mat[0].size();i++)v.push_back(mat[0][i]);
        dp.push_back(v);
        for(int i=1;i<n;i++)
        {
            v=mat[i];
            vector<int> newv(v.size());
            for(int j=0;j<v.size();j++)
            {
                if(j-1>=0 && j+1<v.size())
                {
                    newv[j]=v[j]+max(dp[i-1][j-1],max(dp[i-1][j],dp[i-1][j+1]));
                }
                else if(j-1>=0)
                {
                    newv[j]=v[j]+max(dp[i-1][j-1],dp[i-1][j]);   
                }
                else if(j+1<v.size())
                {
                    newv[j]=v[j]+max(dp[i-1][j],dp[i-1][j+1]);  
                }
               
            }
        dp.push_back(newv);
            
        }
        
        
        int mx=INT_MIN;
        for(int i=0;i<dp[n-1].size();i++)
        mx=max(mx,dp[n-1][i]);
        
        
        return mx;
        
        
        
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        vector<vector<int>> Matrix(N, vector<int>(N, 0));
        for(int i = 0;i < N*N;i++)
            cin>>Matrix[(i/N)][i%N];
        
        Solution ob;
        cout<<ob.maximumPath(N, Matrix)<<"\n";
    }
    return 0;
}  // } Driver Code Ends
