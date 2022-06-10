#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution{   
public:
    string smallestNumber(int S, int D){
        // code here 
        
        
       if(S>D*9)
       return "-1";
       S--;
       int ans[D];
       for(int i=D-1;i>0;i--)
       {
           if(S>9)
           {
               ans[i]=9;
               S-=9;
           }
           else
           {
               ans[i]=S;
               S=0;        
           }
            
        }
        
        ans[0]=S+1;
        string fans="";
        for(int i=0;i<D;i++)
        fans+=to_string(ans[i]);
       
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
        int S,D;
        cin >> S >> D;
        Solution ob;
        cout << ob.smallestNumber(S,D) << endl;
    }
    return 0; 
}   // } Driver Code Ends
