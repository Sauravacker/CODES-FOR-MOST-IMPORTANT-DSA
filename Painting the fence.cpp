#include <bits/stdc++.h>
#include<stdio.h>
#include<math.h>
using namespace std;

 // } Driver Code Ends
class Solution{
    public:
    long long mod=1000000007;
    long long countWays(int n, int k){
        // code here
        
        long long dp[5001][3];
        dp[1][0]=0;dp[1][1]=k;dp[1][2]=k;
        // dp[2][0]=k;dp[2][1]=dp[1][2]*(k-1);dp[2][2]=dp[2][0]+dp[2][1];
        
        
        for(int i=2;i<=n;i++)
        {
            
            dp[i][0]=dp[i-1][1];
            dp[i][1]=(dp[i-1][2]*(k-1))%mod;
            dp[i][2]=(dp[i][0]+dp[i][1])%mod;
            
        }
        
        
        return dp[n][2];
    }
};

// { Driver Code Starts.

int main()
{
	
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		Solution ob;
		cout<<ob.countWays(n,k)<<endl;
	}
	return 0;
}  // } Driver Code Ends
