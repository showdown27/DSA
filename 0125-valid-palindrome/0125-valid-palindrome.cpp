class Solution {
private:
    bool validCharacter(char ch){
        if ((ch>=48 && ch<=57)||(ch>='a' && ch<='z')||(ch>='A' && ch<='Z')){
            return 1;
        }
        else return 0;
    }
    char lowercase(char s){
        if((s>='a' && s<='z') || (s>='0' && s<='9')){
            return s;
        }
        else{
            char temp = s - 'A' +'a';
            return temp;
        }
    }
public:
    bool isPalindrome(string s) {
        string temp = "";
        for(int j = 0; j<s.length(); j++){
            if (validCharacter(s[j])){
                temp.push_back(s[j]);
            }
        }
        for(int i = 0; i<temp.length(); i++){
            temp[i] = lowercase(temp[i]);
        }
        int i = 0, j = temp.length()-1;
        while(i<j){
            if(temp[i]==temp[j]){
                i++, j--;
            }
            else{
                return false;
            }
        }
        return true;
    }
};