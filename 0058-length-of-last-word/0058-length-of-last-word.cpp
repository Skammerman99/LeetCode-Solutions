class Solution {
public:
    int lengthOfLastWord(string s) {
        int right = 0;
        for(right = s.length() - 1; right > 0; right--){
            if(s[right] != ' '){
                break;
            }
        }
        int left = right;
        for(left; left >= 0; left--){
            if(s[left] == ' '){
                break;
            }        
        }
        return right - left;
    }
};