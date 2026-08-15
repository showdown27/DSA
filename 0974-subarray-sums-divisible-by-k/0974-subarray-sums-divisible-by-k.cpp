class Solution {
public:
    int subarraysDivByK(vector<int>& a, int k) {
        unordered_map<int, int>m;
        int sum = 0, count = 0;
        m[0]++;
        for(int i = 0; i<a.size(); i++){
            sum = sum+a[i];
            int rem = sum % k;
            if(rem<0){
                rem = rem + k;
            }
            count = count + m[rem];
            m[rem]++;
        }
        return count;
    }
};