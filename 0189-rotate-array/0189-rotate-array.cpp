class Solution {
public:
    void rotate(vector<int>& a, int k) {
        int i = 0, j = a.size()-1;
        k = k % a.size();
        while(i<j){
            int temp = a[i];
            a[i] = a[j];
            a[j] = temp;
            i++, j--;
        }
        i = 0, j = k-1;
        while(i<j){
            
            int temp = a[i];
            a[i] = a[j];
            a[j] = temp;
            i++, j--;
        }
        i = k, j = a.size()-1;
        while(i<j){
            
            int temp = a[i];
            a[i] = a[j];
            a[j] = temp;
            i++, j--;
        }
    }
};