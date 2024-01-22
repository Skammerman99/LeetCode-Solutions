class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.length() == 0 || s.length() == 1){
            return s.length();
        }
        std::set<char> used;
        int l = 0;
        int r = 1;
        int max = 0;
        used.insert(s[0]);
        while(r < s.length()){
            if(used.contains(s[r])){
                if(r - l > max){
                    max = r - l;
                }
                used.erase(s[l]);
                l++;
            }
            else{
                used.insert(s[r]);
                r++;
            }
        }
        if(r - l > max){
            max = r - l;
        }
        return max;
        
    }
};