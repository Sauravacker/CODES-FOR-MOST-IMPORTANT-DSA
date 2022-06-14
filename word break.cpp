
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    vector<vector<string>> f;
    
    void rec(int ind,int szs,int n,vector<string> &dict,string s,vector<string> &asf)
    {
        if(ind==szs)
        {
            f.push_back(asf);
            return ;
        }
        else if(ind>szs)
        return;
        
        for(int j=0;j<n;j++)
        {int l=dict[j].length();
         if(szs-ind<l)continue;
            if(s.substr(ind,l)==dict[j])
            {
                asf.push_back(dict[j]);
                
                rec(ind+l,szs,n,dict,s,asf);
                
                asf.pop_back();
                
            }
        }
        
        
    }
    vector<string> wordBreak(int n, vector<string>& dict, string s)
    {
        // code here   
        vector<string> asf;
        int szs=s.length();
        int ind=0;
        rec(ind,szs,n,dict,s,asf);
        asf.clear();
        for(int i=0;i<f.size();i++)
        {   
            vector<string> v=f[i];
            if(v.size()==0)continue;
            string tans=v[0];
            for(int j=1;j<v.size();j++)
            {
                tans=tans+" "+v[j];            }
            
         asf.push_back(tans);
            
        }

        return  asf;                                                                                                                                                                                                                                                                                                                                                                                                                                            
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        vector<string> dict;
        string s;
        cin>>n;
        for(int i = 0;i < n;i++){
            cin>>s;
            dict.push_back(s);
        }
        cin>>s;
        
        Solution ob;
        vector<string> ans = ob.wordBreak(n, dict, s);
        if(ans.size() == 0)
            cout<<"Empty\n";
        else{
            sort(ans.begin(), ans.end());
            for(int i = 0;i < ans.size();i++)
                cout<<"("<<ans[i]<<")";
            cout<<endl;
        }
    }
    return 0;
}  // } Driver Code Ends
