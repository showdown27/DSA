class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
      int sum = 0, res = INT_MAX, high = 0, low = 0, n = nums.size();
      int len = 0;
      while(high<n){
        sum = sum + nums[high];
        while(sum>=target){
            len = high-low+1;
            res = min(res,len);
            low++;
            sum = sum - nums[low-1];
        }
        high++;
      }
      if(high==n && (len==0)){
            return 0;
        }
      return res;
    }
};