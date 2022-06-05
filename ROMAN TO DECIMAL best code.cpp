class Solution {
  public:
    int romanToDecimal(string &s) {
        // code here
        
        
        int n=s.length();
        int ans=0;
        map<char,int> m;
        m['I']=1;m['X']=10;m['C']=100;m['M']=1000;
        m['V']=5;m['L']=50;m['D']=500;
        for(int i=0;i<n;i++)
        {
            int v1=m[s[i]];
            if(i+1<n)
            {int v2=m[s[i+1]];
            
            if(v2<=v1)
            {ans+=v1;}
            else 
            {ans+=v2-v1;i++;}
                
            }
            else
            {ans+=v1;}
        }
        
        
        return ans;
    }
};
