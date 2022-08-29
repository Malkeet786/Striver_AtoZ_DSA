class Solution{
  public:
    // Function to find floor of x
    // n: size of vector
    // x: element whose floor is to find
    int findFloor(vector<long long> v, long long n, long long x){
        
        // Your code here
           int s = 0, e = n - 1, mid;
           if(v[0] > x)
             return -1;
           while(s < e){
              mid = s + (e - s)/2;
       if(v[mid] == x)
       return mid;
       else if(v[mid] > x)
       e = mid - 1;
       else
       s = mid + 1;
   }
   return s;
    }
};