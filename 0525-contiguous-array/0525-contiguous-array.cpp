class Solution {
public:
    int findMaxLength(vector<int>& a) {
        int n = a.size();
        int zeros = 0, ones = 0, res = 0;
        unordered_map<int, int> f;
        for(int i = 0; i<n; i++){
            if(a[i]==0) zeros++;
            else ones++;
            int diff = zeros - ones;
            if(diff==0){
                res = max(res, i+1);
                continue;
            }
            if(f.find(diff)==f.end()){
                f[diff] = i;
            }
            else{
                int index = f[diff];
                int len = i - index;
                res = max(res, len);
            }
        }
        return res;
    }
};