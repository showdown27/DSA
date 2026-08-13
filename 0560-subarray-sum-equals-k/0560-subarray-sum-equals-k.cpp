class Solution {
public:
    int subarraySum(vector<int>& a, int k) {
        unordered_map<int, int>m;
        m[0]++;
        int count = 0, sum = 0;
        for(int i = 0; i<a.size(); i++){
            sum = sum + a[i];
            int target = sum - k;
            if(m.find(target)!=m.end()){
                count = count + m[target];
            }
            m[sum]++;
        }
        return count;
    }
};      