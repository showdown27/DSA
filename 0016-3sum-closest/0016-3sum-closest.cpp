class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int max_diff = INT_MAX;
        int closestSum = nums[0] + nums[1] + nums[2];
        for(int i = 0; i<n-2; i++){
            int left = i+1;
            int right = n-1;
            
            while(left<right){
                int sum = nums[left]+nums[right]+nums[i];
                if(sum==target){
                    return target;
                }
                if(abs(sum-target)<abs(closestSum-target)){
                    closestSum = sum;
                }
                else if(sum<target){
                        left++;
                    }
                else{
                        right--; 
                }
            }
        }
        return closestSum;
    }
};