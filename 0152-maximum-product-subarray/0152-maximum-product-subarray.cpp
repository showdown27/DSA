class Solution {
public:
    int maxProduct(vector<int>& a) {
        int v1 = 0, v2 = 0, v3 = 0, res = a[0], maxi = a[0], mini = a[0];
        for(int i = 1; i<a.size(); i++){
            v1 = a[i];
            v2 = maxi*a[i];
            v3 = mini*a[i];
            maxi = max(v1, max(v2,v3));
            mini = min(v1, min(v2,v3));
            res = max(res, max(mini,maxi));
        }
        return res;
    }
};