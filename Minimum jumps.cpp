#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// Function to return minimum number of jumps to end of array

class Solution{
  public:
  
    int minJumps(int arr[], int n){
        // Your code here
        if(n==1)
        return 0;
        int ans=1;
        int i=0;
        int mxr=arr[0],cur=arr[0];
       
        for(;i<n-1 && i<=mxr && mxr<n-1;i++)
        {
         
            for(int j=i;j<=mxr;j++)
            {
                cur=max(cur,j+arr[j]);
            }            
            
            if(cur>mxr)
            {
                mxr=cur;ans++;
            }
            
        }
        
        
        if(mxr>=n-1)
        {
            return ans;
        }
        else
        return -1;
        
        
        
    }
};


// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        Solution obj;
        cout<<obj.minJumps(arr, n)<<endl;
    }
    return 0;
}
  // } Driver Code Ends
