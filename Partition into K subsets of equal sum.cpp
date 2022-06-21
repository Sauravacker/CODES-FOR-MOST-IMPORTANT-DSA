#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
/*You are required to complete this method */

class Solution{
  public:
    bool fans;
    void rec(int idx,int n,int cnt,vector<int> &a,int k,vector<vector<int>> & ans)
    {
        if(idx==n)
        {
            if(cnt==k)
            {
                int sum=0;
                bool tans=true;
                for(int i=0;i<ans[0].size();i++)sum+=ans[0][i];
                for(int j=1;j<k;j++)
                {
                    auto v=ans[j];
                    int tsum=0;
                    for(int i=0;i<v.size();i++)
                    tsum+=v[i];
                    if(tsum!=sum){tans=false;break;}
                }
                
                if(tans)
                fans=true;
            }
            return;
        }
        
        for(int j=0;j<k;j++)
        {
            if(ans[j].size()>0)
            {
                ans[j].push_back(a[idx]);
                     rec(idx+1,n,cnt,a,k,ans);
                ans[j].pop_back();
                
                
                
            }
            else
            {
                ans[j].push_back(a[idx]);
                    rec(idx+1,n,cnt+1,a,k,ans);
                ans[j].pop_back();
                break;
            }
        }
        
        
        
    }
    
    
    
    
    bool isKPartitionPossible(int a[], int n, int k)
    {
         //Your code here
         int sum=0;
         vector<int> v;
         vector<bool> used(n);
         fans=false;
         for(int i=0;i<n;i++){sum+=a[i];v.push_back(a[i]);}
        
         if(sum%k || k>n)
         return fans;
        
         vector<vector<int>> anz(k);
         rec(0,n,0,v,k,anz);
         
         return fans; 
        
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
    	int k;
    	cin>>k;
    	Solution obj;
    	cout<<obj.isKPartitionPossible(a, n, k)<<endl;
    }
}  // } Driver Code Ends
