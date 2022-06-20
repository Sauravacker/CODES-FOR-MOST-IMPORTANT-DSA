#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


class Solution
{
    public:
    //Function to find the largest number after k swaps.
    
    void rec(string s,int k,string &ans)
    {
        if(k==0)
        return;
        
        
        for(int i=0;i<s.length()-1;i++)
        {char mx=s[i];
            for(int j=i+1;j<s.length();j++)
            {
                if(s[j]>mx)
                mx=s[j];
                
            }
            if(mx==s[i])continue;
            for(int j=i+1;j<s.length();j++)
            {
                if(s[j]==mx)
                {
                    swap(s[i],s[j]);
                    if(ans<s)ans=s;
                    rec(s,k-1,ans);
                    swap(s[i],s[j]);
                    
                }
            }
        }
        
        
        
        
        
    }
    
    string findMaximumNum(string s, int k)
    {
      string ans=s;
      
      rec(s,k,ans);
      return ans;
       
    }
};

// { Driver Code Starts.

int main()
{
    int t, k;
    string str;

    cin >> t;
    while (t--)
    {
        cin >> k >> str;
        Solution ob;
        cout<< ob.findMaximumNum(str, k) << endl;
    }
    return 0;
}
  // } Driver Code Ends
