class Solution
{
    public:
    //Function to check if two strings are isomorphic.
    bool areIsomorphic(string s1, string s2)
    {
        map<char,char> m;
        
        int n1=s1.length();
        int n2=s2.length();
        if(n1!=n2)return false;
        bool vis[26]={false};
        for(int i=0;i<n1;i++)
        {   
            if(m.find(s1[i])!=m.end())
            {
                if(m[s1[i]]!=s2[i])return false;
            }
            else
            {   if(vis[s2[i]-'a']==false)
                {   m[s1[i]]=s2[i];
                    vis[s2[i]-'a']=true;}
                else 
                    return false;
             }
        }
        
        
        return true;
    }
};
