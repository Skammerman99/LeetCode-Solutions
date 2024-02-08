class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        if(n == 0){
            return true;
        }
        if(flowerbed.size() == 1){
            if(!flowerbed[0] && n <= 1){
                return true;
            }
            return false;
        }
        for(int i = 0; i < flowerbed.size() - 1; i++){
            std::cout << flowerbed[i] << std::endl;
            if(i == 0){
                if (!flowerbed[1] && !flowerbed[0]){
                    flowerbed[0] = 1;
                    n--;
                }
            }else{
                if (!flowerbed[i-1] && !flowerbed[i+1] && !flowerbed[i]){
                    flowerbed[i] = 1;
                    n--;
                }
                
            }
            if(n <= 0){
                return true;
            }
        }
        if(!flowerbed[flowerbed.size()-1] && !flowerbed[flowerbed.size()-2])
        {
            if(n<=1){
                return true;
            }
        }
        return false;
    }
};