class Solution {
public:
    int maximumSum(vector<int>& a) {
        int res = a[0], v2 = 0, nd = a[0], od = INT_MIN;
        for(int i = 1; i<a.size(); i++){
            int prevOD = od;
            int prevND = nd;
            nd = max(a[i], prevND+a[i]);
            if(od==INT_MIN){
                v2 = a[i];
            }else{
                v2 = prevOD + a[i];
            }
            od = max(v2, prevND);
            res = max (res ,max(od,nd));
        }
        return res;
    }
};