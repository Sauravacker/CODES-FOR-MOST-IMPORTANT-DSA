#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++
class Solution{
public:
	void merge(int arr1[], int arr2[], int n, int m) {
	    // code here
	    
	    int tn=n+m+1;
	    int gap=tn/2;
	   
	    while(gap)
	    {
	        int l=0,r=l+gap;
	      
	      
	        
	        if(r<n)
	        {
	            while(r<n)
	            {
	                if(arr1[l]>arr1[r])swap(arr1[l],arr1[r]);
	                l++;r++;
	            }
	        }
	        r=r%n;
	        while(l<n && r<m)
	        {if(arr1[l]>arr2[r])swap(arr1[l],arr2[r]);l++;r++;}
	        
	        if(l==n)
	        {
	            l=l%n;
	            while(r<m)
	            {if(arr2[l]>arr2[r])swap(arr2[l],arr2[r]);l++;r++;}     
	            
	            
	        }
	        if(gap==1)break;
	        
	        gap=(gap/2)+(gap%2);
	    }
	    
	    
	    
	}
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, i;
        cin >> n >> m;
        int arr1[n], arr2[m];
        for (i = 0; i < n; i++) {
            cin >> arr1[i];
        }
        for (i = 0; i < m; i++) {
            cin >> arr2[i];
        }
        Solution ob;
        ob.merge(arr1, arr2, n, m);
        for (i = 0; i < n; i++) {
            cout << arr1[i] << " ";
        }
        for (i = 0; i < m; i++) {
            cout << arr2[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}  // } Driver Code Ends
