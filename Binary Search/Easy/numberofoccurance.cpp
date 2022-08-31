class Solution{
public:	
	/* if x is present in arr[] then returns the count
		of occurrences of x, otherwise returns 0. */
		int find(int arr[],int l,int h,int x)
	{   
	    int ind=-1;
	   
	    while(l<=h)
	    {   
	        int mid=(l+h)/2;
	        if(arr[mid]<=x)
	        {   
	            ind=max(ind,mid);
	            l=mid+1;
	        }
	        else
	            h=mid-1;
	    }
	    return ind;
	}
	int count(int arr[], int n, int x) {
	    // code here
	    int i1=find(arr,0,n-1,x);
	 //   cout<<i1<<endl;
	   int i2=find(arr,0,n-1,x-1);
	    return i1-i2;
	}
};