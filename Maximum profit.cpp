// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int dp[501][201];
    int rec(int n,int k,int a[])
    {
        
        if(n==1 || k==0)
        {
            return 0;
        }
        
        if(dp[n][k]!=-1)
        return  dp[n][k];
        
        
        //buy
        int ans=0;
            int profit2=rec(n-1,k,a);
            ans=profit2;
            for(int i=n-1;i>=0;i--)
            {
                if(a[i]-a[n-1]>0)
                {
                    int profit=a[i]-a[n-1];
                    int rempro=rec(i+1,k-1,a);
                    ans=max(ans,profit+rempro);
                    
                }
            
            }
        
        
        
        return dp[n][k]=ans;
        
        
        
    }
    
    int maxProfit(int K, int N, int A[]) {
        // code here
        memset(dp,-1,sizeof(dp));
        reverse(A,A+N);
        
        return rec(N,K,A);
        
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, K;
        cin >> K;
        cin >> N;
        int A[N];
        for (int i = 0; i < N; i++) cin >> A[i];

        Solution ob;
        cout << ob.maxProfit(K, N, A) << endl;
    }
    return 0;
}  // } Driver Code Ends
