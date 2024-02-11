class Solution {
public:
    int partitionString(string s) {
        std::set<char> used;
        int total = 1;
        for(auto c : s){
            if(!used.count(c)){
                used.insert(c);
            }
            else{
                total++;
                used.clear();
                used.insert(c);
            }
        }
        return total;
    }
};