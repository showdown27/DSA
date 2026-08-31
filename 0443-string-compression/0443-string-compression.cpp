class Solution {
public:
    int compress(vector<char>& ch) {
        int ans = 0;
        int i = 0;
        while(i<ch.size()){
            int j = i+1;
            while(j<ch.size() && ch[i]==ch[j]){
                j++;
            }
            ch[ans++] = ch[i];
            int count = j-i;
            if(count>1){
                string cnt = to_string(count);
                for(char c:cnt){
                    ch[ans++] = c;
                }
            }
            i = j;
        }
        return ans;
    }
};