class Solution {
public:
    int maxAbsoluteSum(vector<int>& a) {
        int be1 = a[0], be2 = a[0], res = a[0];
        int v1 = 0, v2 = 0, v3 = 0;
        for(int i = 1; i<a.size(); i++){
            v1 = be1 + a[i];
            v2 = a[i];
            v3 = be2 + a[i];
            be1 = max({v1, v2, v3});
            be2 = min({v1, v2, v3});
            res = max(abs(res), max(abs(be1), abs(be2)));
        }
        return abs(res);
    }
};