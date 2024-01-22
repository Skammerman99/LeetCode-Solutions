class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        std::sort(wordDict.begin(), wordDict.end(), []
        (const std::string& first, const std::string& second){
            return first.size() > second.size();
        });
        
        std::set<string> failed;
        return wordBreak(s,wordDict,failed);
    }
    
    bool wordBreak(string s, vector<string>& wordDict, std::set<string>& failed) {
        if(failed.contains(s)){
            return false;    
        }
        bool result = false;
        for(string word : wordDict){
            if(word.length() > s.length()){
                continue;
            }
            if(word == s.substr(0, word.length())){
                if(word.length() == s.length()){
                    return true;
                }else{
                    result = true && wordBreak(s.substr(word.length()), wordDict, failed);
                }
            }
            if(result){
                return result;
            }
        }
        if(!result){
            failed.insert(s);
        }
        return result;        
    }
    
};