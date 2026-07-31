class Solution {
public:
    string minWindow(string s, string t) {
       int m = s.length(), n = t.length();

        if (n == 0 || m < n) return "";
        
        vector<int> freqT(256, 0);
        vector<int> freqS(256, 0);
        
        for (char c : t) {
            freqT[c]++;
        }
        
        int left = 0, right = 0;
        int required = n;  
        int formed = 0;
        int minLen = INT_MAX;
        int minLeft = 0;
        
        while (right < m) {
            
            char c = s[right];
            freqS[c]++;
            
            if (freqT[c] > 0 && freqS[c] <= freqT[c]) {
                formed++;
            }
            
            while (formed == required) {
                int windowLen = right - left + 1;
                
                if (windowLen < minLen) {
                    minLen = windowLen;
                    minLeft = left;
                }
                
                
                char leftChar = s[left];
                freqS[leftChar]--;
                
                if (freqT[leftChar] > 0 && freqS[leftChar] < freqT[leftChar]) {
                    formed--;
                }
                
                left++;
            }
            
            right++;
        }
        
        return minLen == INT_MAX ? "" : s.substr(minLeft, minLen); 
    }
};