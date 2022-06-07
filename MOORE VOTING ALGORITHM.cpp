int majorityElement(int a[], int n)
{
        
    // your code here
    int cnt=1;
    int cur=a[0];
    int curi=0;
    int candi=a[0];
    for(int i=1;i<n;i++)
    {
        if(a[curi]==a[i])
        {cnt++;}
        else
        {cnt--;}
        
        if(cnt==0)
        {
            curi=i;cnt=1;
        }
    }
    
    
   candi=a[curi];
   cnt=0;
   for(int i=0;i<n;i++)
   if(a[i]==candi)cnt++;
        
        
        if(cnt>n/2)
        return candi;
        
        
        return -1;
}
