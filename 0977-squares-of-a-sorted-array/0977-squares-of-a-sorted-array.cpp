class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        int i = 0, j = n-1, k = n-1;
        vector<int>result(n);
        while(i<=j){
            int left = nums[i] * nums[i];
            int right = nums[j] * nums[j];
            if(left>right){
                result[k]=left;
                i++;
            }
            else{
                result[k]=right;
                j--;
            }
            k--;
        }
        return result;
    }
};