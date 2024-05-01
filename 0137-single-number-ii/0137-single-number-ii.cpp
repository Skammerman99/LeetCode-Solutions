class Solution {
public:
    int singleNumber(vector<int>& nums) {
        std::sort(nums.begin(),nums.end());
        int last = nums[0];
        int count = 1;
        for(int i = 1; i < nums.size(); i++){
            if(nums[i] == last){
                count++;
            }else if(count == 3){
                last = nums[i];
                count = 1;
            }else if(count == 1){
                return last;
            }
        }
        return last;
    }
};