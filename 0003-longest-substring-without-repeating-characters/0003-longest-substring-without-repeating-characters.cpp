class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int high = 0, low = 0, res = 0, n = s.size();
        unordered_map<char, int> f;
        for (high = 0; high<n; high++){
            f[s[high]]++;
            if(!(f.size()==(high-low+1))){
                f[s[low]]--;
                if(f[s[low]]==0) f.erase(s[low]);
                low++;
            }
            res = max(high-low+1, res);
        }
        return res;
    }
};