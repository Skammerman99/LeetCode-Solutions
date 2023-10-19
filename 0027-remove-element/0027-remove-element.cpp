class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int index = 0;
        int tmp = 0;
        for (int i = 0; i < nums.size(); i++){
            if (nums[i] != val){
                tmp = nums[i];
                nums[i] = nums[index];
                nums[index] = tmp;
                index++;
            }
        }
        return index;
    }
};