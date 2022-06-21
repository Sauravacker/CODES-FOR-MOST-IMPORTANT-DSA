#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution{
    public:
    int maxSumPairWithDifferenceLessThanK(int arr[], int n, int k)
    {   sort(arr,arr+n);
        int sum=0;
        if(n==1)
        return sum;
        // Your code goes here   
        
        for(int i=n-1,j=n-2;i>=0 && j>=0;)
        {
            if(arr[i]-arr[j]<k)
            {sum+=arr[i]+arr[j];i=j-1;j=i-1;}
            else
            {
                i--;j--;
            }
        }
        
        return sum;
    }
};

// { Driver Code Starts.
int main() {
	int t;
	cin>>t;
	while(t--)
	{
		int N;
		cin>>N;
		int arr[N];
		for(int i=0;i<N;i++)
		cin>>arr[i];

		int K;
		cin>>K;
        Solution ob;
		cout<<ob.maxSumPairWithDifferenceLessThanK(arr,N,K)<<endl;
	}
	return 0;
}
  // } Driver Code Ends
