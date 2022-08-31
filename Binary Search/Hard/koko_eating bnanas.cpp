class Solution {
public:
    int Calculate(vector<int>& nums,int k){
        int NumberOfHours=0;
        for(int i=0;i<nums.size();i++){
            NumberOfHours+=(nums[i]%k==0) ? nums[i]/k : (nums[i]/k)+1;
        }
        return NumberOfHours;
    }
    
    
    
    
    int minEatingSpeed(vector<int>& nums, int H) {
        int left=1;
        int right=1000000000;
        int ans=0;
        while(left<=right){
           int k=left+(right-left)/2;    
            
           int NumberOfHours = Calculate(nums,k);
            
            if(NumberOfHours>H){
                left=k+1;
            }
            else if(NumberOfHours<=H){
                ans=k;
                right=k-1;
            }
        }
        return ans;
        
    }
//     int timefunction(int mid,vector<int>&piles){
//         int sum=0;
//         for(int i=0;i<piles.size();i++){
//             sum+=(piles[i]/mid)+((piles[i]%mid)!=0);
//         }
//         return sum;
//     }
//     int minEatingSpeed(vector<int>& piles, int h) {
//         int low=1;
//         int high=*max_element(piles.begin(),piles.end());
//         int ans=0;
//         while(low<=high){
//             int mid=(low+high)/2;
            
//             int time=timefunction(mid,piles);
//             if(time<=h){
//                 ans=mid;
//                 high=mid-1;
//             }else{
//                 low=mid+1;
//             }
            
//         }return ans;
   // }
};