class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        unordered_map<int, int> f;
        int high = 0, low = 0, len = 0, res = INT_MIN, n = fruits.size();
        for(high = 0; high < n; high++){
            f[fruits[high]]++;
            while(f.size()>2){
                f[fruits[low]]--;
                if(f[fruits[low]] == 0)
                    f.erase(fruits[low]);
                low++;
            }
            if(f.size()<=2){
                len = high-low+1;
                res = max(res, len);
            }
        }
        return res;
    }
};