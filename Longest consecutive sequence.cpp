int Solution::longestConsecutive(const vector<int> &A) {
    
    set<int> s;
    int n=A.size();
    for(int i=0;i<n;i++)
    s.insert(A[i]);
    vector<int> b;
    
    for(auto it=s.begin();it!=s.end();it++)
    b.push_back(*it);
    
    int ans=1;
    int last=0;
    int x=b[last];
    int i=1;
    for(;i<b.size();i++)
    {
        if(b[i]==x+1)
        {
        x=b[i];
        continue;
        }
        ans=max(ans,i-last);last=i;x=b[last];
        
    }
   ans=max(ans,i-last);
   return ans;
    
   
}

