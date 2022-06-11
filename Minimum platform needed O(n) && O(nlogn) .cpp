#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends





//O(N) SOLUTION
class Solution{
    public:
    //Function to find the minimum number of platforms required at the
    //railway station such that no train waits.
    int findPlatform(int arr[], int dep[], int n)
    {
    	// Your code here
    	
    	int platf[2361]={0};
    	
    	for(int i=0;i<n;i++)
    	{
    	    platf[arr[i]]++;
    	    platf[dep[i]+1]--;
    	}
    	int ans=INT_MIN;
    	
    	for(int i=1;i<2361;i++)
    	{
    	    platf[i]+=platf[i-1];
    	    
    	    ans=max(ans,platf[i]);
    	    
    	}
    
    
    return ans;	
    }
    
};


//O(NlogN) SOLUTION


bool cmp(const pair<int,int> a,const pair<int,int> b)
{
    if(a.first<b.first)return true;
    else if(a.first==b.first)
    {
        return a.second>b.second;
    }
    else
    return false;
}



class Solution{
    public:
    //Function to find the minimum number of platforms required at the
    //railway station such that no train waits.
    int findPlatform(int arr[], int dep[], int n)
    {
    	// Your code here
    	vector<pair<int,int>>  v;
    	
    	for(int i=0;i<n;i++)
    	{
    	    v.push_back({arr[i],1});
    	    v.push_back({dep[i],-1});
    	}
    int mx=1;int s=0;
    sort(v.begin(),v.end(),cmp);
        	for(int i=0;i<2*n;i++)
            {s+=v[i].second;mx=max(s,mx);}
        
    return mx;}
    
};



// { Driver Code Starts.
// Driver code
int main()
{
    int t;
    cin>>t;
    while(t--) 
    {
        int n;
        cin>>n;
        int arr[n];
        int dep[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        for(int j=0;j<n;j++){
            cin>>dep[j];
        }
        Solution ob;
        cout <<ob.findPlatform(arr, dep, n)<<endl;
    } 
   return 0;
}  // } Driver Code Ends
