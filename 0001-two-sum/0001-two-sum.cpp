class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::map<int,int> mapper;
        vector<int> result;
        for(int i = 0; i < nums.size(); i++){
            if(mapper.find(target-nums[i]) != mapper.end()){
                result.push_back(i);
                result.push_back(mapper[target-nums[i]]);
                return result;
            }
            mapper.insert(std::make_pair(nums[i], i));
        }
        return result;
    }
};