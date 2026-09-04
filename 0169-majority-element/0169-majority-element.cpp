class Solution {
public:
    int majorityElement(vector<int>& a) {
        int count = 0, count1 = 0, ele;
        for(int i = 0; i< a.size(); i++){
            if(count == 0){
                ele = a[i];
                count = 1;
            }
            else if(ele == a[i]){
                count ++;
            }
            else count--;
        }
        for(int i = 0; i<a.size(); i++){
            if(ele == a[i]){
                count1++;
            }
        }
        if(count1==(a.size()/2)){
            return ele;
        }
        return ele;
    }
};