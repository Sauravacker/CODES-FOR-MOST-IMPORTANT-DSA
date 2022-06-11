#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
    public:
    long long int maximizeSum(long long int a[], int n, int k)
    {
        // Your code goes here
        
        sort(a,a+n);
        int left=k;
        for(int i=0;i<min(k,n) && left>0;i++)
        {   if(a[i]<0)
            {a[i]=(-1*a[i]);left--;}
            else if(a[i]==0)
            {left=0;}
            else if(a[i]>0)
            {a[i]=((k-i)%2?(-a[i]):a[i]);
                left=0;}
        }
        sort(a,a+n);
        
        if(left%2)
        {a[0]=(-a[0]);}
        
        long long int s=0;
        for(int i=0;i<n;i++)s+=a[i];
        
        return s;
    }
};

// { Driver Code Starts.
int main()
 {
     int t;
     cin>>t;
     while(t--)
     {
         int n, k;
         cin>>n>>k;
         long long int a[n+5];
         for(int i=0;i<n;i++)
         cin>>a[i];
         Solution ob;
         cout<<ob.maximizeSum(a, n, k)<<endl;
     }
	
	return 0;
}  // } Driver Code Ends
