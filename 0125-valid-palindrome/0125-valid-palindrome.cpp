class Solution {
public:
    bool isPalindrome(string s) {
        int first, second;
        first = 0;
        second = s.length() - 1;
        while(first < second){
            while( !(tolower(s[first]) >= 'a' && tolower(s[first]) <= 'z' ) && !(s[first] >= '0' && s[first] <= '9')  && first < s.length()){
                first++;
            }
            while( !(tolower(s[second]) >= 'a' && tolower(s[second]) <= 'z' ) && !(s[second] >= '0' && s[second] <= '9')  && second > 0 ) {                
                second--;
            }
            if(first >= second){
                return true;
            }
            if(tolower(s[first]) != tolower(s[second])){
                return false;
            }
            first++;
            second--;
        }
        return true;
    }
};