class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        std::map<int,int> mapper;
        for(int num:nums){
            if(mapper[num] >= 1){
                return true;
            }
            mapper[num] += 1;
        }
        return false;
    }
};