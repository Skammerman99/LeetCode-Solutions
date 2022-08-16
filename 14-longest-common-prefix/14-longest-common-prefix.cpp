class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string result = "";
        char check;
        for(int i = 0; i < strs[0].length(); i++){
            check = strs.front()[i];
            for (int j = 1; j < strs.size(); j++){
                if (strs[j][i] != check){
                    return result;
                }
            }   
            result += check;
        }
        return result;
    }
};