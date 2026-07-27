class Solution {
  public:
    int longestKSubstr(string &s, int k) {
        unordered_map<char, int> f;
        int n = s.size();
        int low = 0, high = 0, len = 0, res = INT_MIN;
        for(high = 0; high<n; high++){
            f[s[high]]++;
            while(f.size()>k){
                f[s[low]]--;
                if(f[s[low]]==0) f.erase(s[low]);
                low++;
            }
            if(f.size()==k){
                len = high-low+1;
                res = max(res, len);
            }
        }
        if(res==INT_MIN) return -1;
        return res;
    }
};

/*
sliding Window

Input: s = "aabacbebebe", k = 3
Output: 7
Explanation: The longest substring with exactly 3 distinct characters is "cbebebe", which includes 'c', 'b', and 'e'.

Input: s = "aaaa", k = 2
Output: -1
Explanation: There's no substring with 2 distinct characters.

Input: s = "aabaaab", k = 2
Output: 7
Explanation: The entire string "aabaaab" has exactly 2 unique characters 'a' and 'b', making it the longest valid substring.

*/
