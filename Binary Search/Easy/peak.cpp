class Solution {
public:
    int firstOcc(int low ,int high,int target,vector<int>& nums){
        int ans=-1;
         while(low<=high)
         {
             int mid=(low+high)/2;
             if(nums[mid]==target)
             {
                 ans=mid;
                 high=mid-1;
             }
             else if(nums[mid]>target)
             {
                 high=mid-1;
             }
             else if(nums[mid]<target)
             {
                 low=mid+1;
             }
         }
         return ans;
    }
    
    int lastOcc(int low ,int high,int target,vector<int>& nums){
        int result=-1;
        
        while(low<=high){
            int mid=low+(high-low)/2;
            
            if(nums[mid]==target){
                result=mid; // candidate for the answer
                low=mid+1;
            }
            else if(nums[mid] > target){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return result;
    }
    
    vector<int> searchRange(vector<int>& nums, int target) {
//        basically find first and last occurebce of the target
        int low=0;
        int high=nums.size()-1;
        
        int first=firstOcc(low,high,target,nums);
        int last=lastOcc(low,high,target,nums);
        
        vector<int>v;
        v.push_back(first);
        v.push_back(last);
        
        return v;
        
    }
};