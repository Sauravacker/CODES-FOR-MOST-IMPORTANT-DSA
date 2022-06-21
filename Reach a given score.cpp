// Driver Code
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

 // } Driver Code Ends
// Complete this function
long long int count(long long int n)
{
	long long int table[n+1],i;
	memset(table, 0, sizeof(table));
	table[0]=1;                 // If 0 sum is required number of ways is 1.
	vector<int> v;
	v.push_back(3);
	v.push_back(5);
	v.push_back(10);
	// Your code here
	for(auto c:v)
	for(long long int i=1;i<=n;i++)
	{
	    if(i-c>=0)
	    table[i]+=table[i-c];
	}
	
	return table[n];
}

// { Driver Code Starts.



int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		cout<<count(n)<<endl;
	}
	return 0;
}  // } Driver Code Ends
