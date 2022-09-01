class Solution 
{
    public:
    bool is_valid(int A[], int N, int M, int m)
   {
       int curr_sum=0;
       int student=1;
       for(int i=0;i<N;i++)
       {
           curr_sum+=A[i];
           if(curr_sum>m)
           {
               student++;
               if(student>M)
                   return false;
               curr_sum=A[i];
           }
       }
       return true;
   }
    int findPages(int A[], int N, int M) 
   {
       if(M>N)
           return -1;
           int res=-1;
       int sum_=0;
       int max_element=0;
       for(int i=0;i<N;i++)
       {
           sum_+=A[i];
           max_element= max(max_element, A[i]);   
       }
       int l=max_element;
       int h=sum_;
       while(l<=h)
       {
           int m = (l+h)/2;
           if(is_valid(A, N, M, m))
           {
               res=m;
               h=m-1;
           }
           else
               l=m+1;
       }
       return res;
       
   }
};