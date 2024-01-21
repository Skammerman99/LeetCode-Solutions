#include <cstdlib>
#include <iostream>
class Solution {
public:
    bool isAnagram(string s, string t) {
        std::map<char, int> mapper;
        for(auto c : s){
            if(mapper.count(c) == 0){
                mapper[c] = 1;
            }else{
                mapper[c]++;

            }
        }
        for(auto c: t){
            if(mapper.count(c) <= 0){
                return false;
            }
            else{
                mapper[c]--;
                if (mapper[c] <= 0){
                    mapper.erase(c);
                }
            }
        }
        return(mapper.empty());
    }
};