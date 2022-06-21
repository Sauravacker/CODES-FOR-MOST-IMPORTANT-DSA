#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution
{
    public:
    //Function to find length of longest increasing subsequence.
    int longestSubsequence(int n, int a[])
    {
       // your code here
    
        int b[n+1];
        
        b[0]=-1;
        
        for(int i=1;i<=n;i++)b[i]=1000001;
        
        for(int i=0;i<n;i++)
        {
            int x=a[i];
            
            auto it=upper_bound(b,b+n+1,x)-b;
            
            if(x>b[it-1] && x<b[it])
            b[it]=x;
            
        }
        
        int i=n;
        for(;i>=2;i--)
        {   
            if(b[i]!=1000001)
            break;
        }
        
        
        return i;
        
    }
};

// { Driver Code Starts.
int main()
{
    //taking total testcases
    int t,n;
    cin>>t;
    while(t--)
    {
        //taking size of array
        cin>>n;
        int a[n];
        
        //inserting elements to the array
        for(int i=0;i<n;i++)
            cin>>a[i];
        Solution ob;
        //calling method longestSubsequence()
        cout << ob.longestSubsequence(n, a) << endl;
    }
}
  // } Driver Code Ends
