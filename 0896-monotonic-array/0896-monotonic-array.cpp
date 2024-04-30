class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int increasing = -1;
        for(int i = 1; i < nums.size(); i++){
            if(nums[i] < nums[i-1] && increasing == 0){
                return false;
            }else if(nums[i] > nums[i-1] && increasing == 1){
                return false;
            }else if(nums[i] > nums[i-1] && increasing == -1){
                increasing = 0;
            }else if(nums[i] < nums[i-1] && increasing == -1){
                increasing = 1;
            }
        }
        return true;
    }
};