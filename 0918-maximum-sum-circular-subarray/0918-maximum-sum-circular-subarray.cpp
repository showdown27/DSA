class Solution {
public:
    int maxSubarraySumCircular(vector<int>& a) {
        int res2 = a[0], res1 = a[0], be1 = a[0], sum = a[0], v1 = 0, v2 = 0, be2 = a[0], v3 = 0;
        for(int i = 1; i< a.size(); i++){
            v1 = be1+a[i];
            v2 = a[i];
            v3 = be2 + a[i];
            be2 = min(v3, v2);
            be1 = max(v1, v2);
            res2 = min(res2, be2);
            res1 = max(res1, be1);

            sum = sum + a[i];
        }
        if (sum-res2==0){
            return res1;
        }
        else{
            return max(res1, sum-res2);
        }
    }
};