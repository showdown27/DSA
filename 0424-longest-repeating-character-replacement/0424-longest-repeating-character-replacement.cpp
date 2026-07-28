class Solution {
public:
    int characterReplacement(string s, int k) {
        int n1 = s.size();
        int high = 0, low = 0, f[256]={0}, res = INT_MIN;
        for(high = 0; high<n1; high++){
            f[s[high]]++;
            int len = high-low+1;
            int mx = *max_element(f,f+256);
            int diff = len - mx;
            while(diff > k){
                f[s[low]]--;
                low++;
                len = high - low+1;
                mx = *max_element(f,f+256);
                diff = len - mx;
            }
            if(diff<=k){
                res = max(res, len);
            }
        }
        return res;
    }
};