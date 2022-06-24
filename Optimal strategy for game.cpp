#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

//Function to find the maximum possible amount of money we can win.
class Solution{
    public:
    int dp[1001][1001];
    long long rec(int i,int j,int arr[],int n)
    {   if(i>j)
        return 0;
        if(i==j)
        {
            return arr[i];
        }
        
        if(dp[i][j]!=-1)return dp[i][j];
        
        return dp[i][j]=max(arr[i]+min(rec(i+2,j,arr,n),rec(i+1,j-1,arr,n)),arr[j]+min(rec(i,j-2,arr,n),rec(i+1,j-1,arr,n)));
    }
    long long maximumAmount(int arr[], int n){
        // Your code here
        
        memset(dp,-1,sizeof(dp));
        return rec(0,n-1,arr,n);
    }
};

// { Driver Code Starts.
int main() 
{
   
   	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		Solution ob;
		cout<< ob.maximumAmount(a,n)<<endl;
	}
	return 0;
}  // } Driver Code Ends
