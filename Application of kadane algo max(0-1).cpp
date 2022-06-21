#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	int maxSubstring(string s)
	{
	    
	    int n=s.length();
	    vector<int> a(n);
	    for(int i=0;i<n;i++)
	    a[i]=2*(s[i]=='0')-1;
	    
	    
	    int mxsum=-1;
	    int sum=0;
	    
	    for(int i=0;i<n;i++)
	    {
	        sum+=a[i];
	        
	        if(sum>mxsum)
	        mxsum=sum;
	        if(sum<0)
	        sum=0;
	    }
	    
	    return mxsum;
	    
	    
	}
};

// { Driver Code Starts.

int main() 
{
   	

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string s;
   		cin >> s;

   	    Solution ob;

   		cout << ob.maxSubstring(s) << "\n";
   	}

    return 0;
}
  // } Driver Code Ends
