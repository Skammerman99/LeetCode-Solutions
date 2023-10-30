class Solution {
public:
    int maxArea(vector<int>& height) {
        vector<int>::iterator left = height.begin();
        vector<int>::iterator right = height.end() - 1;
        int waterAmount = 0;
        
        while(left != right){
              if(*left <= *right){
                int newWater = *left * (right-left);
                waterAmount = std::max(waterAmount, newWater);
                left++;
             }else if(*right < *left){
                int newWater = *right * (right-left);
                waterAmount = std::max(waterAmount, newWater);
                right--;
             }
        }
        return waterAmount;
        
    }
};