class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> result;
        if(nums.size() == 0){
            return result;
        }
        if(nums.size() == 1){
            result.push_back(to_string(nums[0]));
            return result;
        }
        int left = 0;
        int right = 1;
        string currInterval = "" + to_string(nums[left]);
        while(left <= right && right < nums.size()){
            std::cout << nums[right] << " | " << nums[left] + (right - left) << std::endl;
            if(nums[right] != nums[left] + (right-left)){
                if(right - 1 != left){
                    currInterval.append("->" + to_string(nums[right-1]));                    
                }
                result.push_back(currInterval);
                left = right;
                right++;
                currInterval = "" + to_string(nums[left]);
            }else{
                right++;
            }
        }
        if(left != right - 1 && right == nums.size()){
            result.push_back("" + to_string(nums[left]) + "->" + to_string(nums[right-1]));
        }
        else{
            result.push_back("" + to_string(nums[left]));
        }
        return result;
    }
};