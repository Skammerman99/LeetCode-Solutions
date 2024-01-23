class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        map<char,int> noteChars;
        for(auto c: ransomNote){
            if(noteChars[c]){
                noteChars[c]++;
            }else{
                noteChars[c] = 1;
            }
        }
        
        for(auto c: magazine){
            if(noteChars.find(c) != noteChars.end()){
                noteChars[c]--;
                if(noteChars[c] <= 0){
                    noteChars.erase(c);
                }
            }
            std::cout << noteChars.empty() << std::endl;
        }
        
        
        return noteChars.empty();
    }
};