class Solution{
 public:
     long long int dp[1001][1001];
     long long int mod=1000000007;
    /*You are required to complete below method */
    
    
    long long int rec(string &s,int i,int j)
    {
        if(i>j)return 0;
        if(i==j)
        return 1;
        
        if(dp[i][j]!=-1)return dp[i][j];
        int ans;
        if(s[i]==s[j])
        {
            ans=(rec(s,i+1,j)%mod+rec(s,i,j-1)%mod+1)%mod;
            
        }
        else
        {
            ans=((rec(s,i+1,j)%mod+rec(s,i,j-1)%mod-rec(s,i+1,j-1)%mod)+mod)%mod;
            
        }
        
        
        dp[i][j]=ans%mod;
        return ans%mod;
        
    }
    
    long long int  countPS(string str)
    {
       //Your code here
       int n=str.length();
       
      
       memset(dp,-1,sizeof(dp));
       
       
       long long int ans= rec(str,0,n-1);
       
       return ans;
       
      
    }
     
};
