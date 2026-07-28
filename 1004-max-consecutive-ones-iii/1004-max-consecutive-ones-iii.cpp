class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
      int high = 0, low = 0, res = INT_MIN, n = nums.size(), zeros = 0;
      for(high = 0; high < n; high++){
        if(nums[high]==0) zeros++;
        while(zeros>k){
            if(nums[low]==0) zeros--;
            low++;
        }
        int len = high-low+1;
        res = max(res, len);
      }
      return res;
    }
};