class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int longest = 0;
        unordered_set<char> charSet;
        bool dup = false;
        for(int i = 0; i < s.length(); i++){
            charSet.clear();
            for(int j = 0; j < s.length()+1; j++){
                dup = false;
                string sub = s.substr(i,j);
                if (charSet.find(sub.back()) == charSet.end()) {
                        charSet.insert(sub.back());
                }
                else {
                    dup = true;
                    break;
                }
                
                if(!dup && sub.length() >= longest){
                    longest = sub.length();
                }
                
            }
            
        }
        if( s.length() > 1){
            return longest;
        }else{
            return s.length();
        }
    }
};