class Solution {
public:
    int pivotIndex(vector<int>& a) {
        int totalSum = accumulate(a.begin(), a.end(), 0);
        int leftSum = 0;
        
        for (int i = 0; i < a.size(); i++) {
            
            int rightSum = totalSum - leftSum - a[i];
            
            if (leftSum == rightSum) {
                return i;
            }
            
            leftSum += a[i];  
        }
        
        return -1;
    }
};