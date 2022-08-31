class Solution {
public:
      int smallestDivisor(vector<int>& nums, int threshold) {
        int left = 1;
		int right = *max_element(begin(nums),end(nums))+1; // Note, this is to ensure left close, right open [ )
        while(left < right){
            int mid = left + (right - left ) / 2;
            if(getSum(nums, mid) <= threshold) right = mid;
            else left = mid + 1;
        }
        return left;
    }
    
private:
    int getSum(vector<int>& nums, const int divisor){
        int ans = 0;
        for(auto num: nums) ans += num/divisor + (num%divisor > 0 ? 1: 0);
        return ans;
    }
};