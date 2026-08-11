class Solution {
public:
    int subarraySum(vector<int>& a, int k) {
        unordered_map<int, int> prefixSum;  
        prefixSum[0] = 1;  
        int sum = 0;
        int count = 0;
        
        for (int i = 0; i < a.size(); i++) {
            sum += a[i];
            
            
            if (prefixSum.find(sum - k) != prefixSum.end()) {
                count += prefixSum[sum - k];
            }
            
            
            prefixSum[sum]++;
        }
        
        return count;
    }
};