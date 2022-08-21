class Solution {
public:
    string longestPalindrome(string s) {
        string result;
        int len = 0;
        int left, right;
        for(int i = 0; i < s.length(); i++){
            left = i, right = i;
            
            while(left >= 0 and right < s.length() and s[left] == s[right]){
                if((right - left + 1) > len){
                    result = s.substr(left, right-left+1);
                    len = right - left + 1;
                }
                left --;
                right ++;
            }
            
            left = i, right = i+1;
            
            while(left >= 0 and right < s.length() and s[left] == s[right]){
                if((right - left + 1) > len){
                    result = s.substr(left, right-left+1);
                    len = right - left + 1;
                }
                left --;
                right ++;
            }

            
        }
        return result;
    }
};