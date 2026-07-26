class Solution {
  public:
    int maxSubarraySum(vector<int>& arr, int k) {
        int n = arr.size();
        int sum = 0;
        int res = 0;
        int low = 0, high = k-1;
        for(int i = low; i<=high; i++){
            sum = sum+arr[i];
        }
        while(high<n){
            res = max(res, sum);
            high++, low++;
            if(high==n) return res;
            sum = sum - arr[low-1] + arr[high];
        }
        return res;
    }
};


/*
Sliding Window question
Input: arr[] = [100, 200, 300, 400], k = 2
Output: 700
Explanation: arr2 + arr3 = 700, which is maximum.

Input: arr[] = [1, 4, 2, 10, 23, 3, 1, 0, 20], k = 4
Output: 39
Explanation: arr1 + arr2 + arr3 + arr4 = 39, which is maximum.

Input: arr[] = [100, 200, 300, 400], k = 1
Output: 400
Explanation: arr3 = 400, which is maximum.
*/
