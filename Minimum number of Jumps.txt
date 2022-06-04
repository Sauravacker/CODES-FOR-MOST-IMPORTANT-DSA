class Solution{
  public:
  
    int minJumps(int arr[], int n){
        // Your code here
        if(n==1)
        return 0;
        int ans=1;
        int i=0;
        int mxr=arr[0],cur=arr[0];
        int st=0;
        for(;i<n-1 && i<=mxr;i++)
        {
            if(mxr>=n-1)
            break;
            for(int j=st;j<=mxr;j++)
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
