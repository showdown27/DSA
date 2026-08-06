class Solution {
public:
    int maxSubArray(vector<int>& a) {
        int be = a[0], v1 = 0, v2 = 0;
        int res = a[0];
        for(int i = 1; i<a.size(); i++){
            v1 = be + a[i];
            v2 = a[i];
            be = max(v1,v2);
            res = max(be, res);
        }
        return res;
    }
};