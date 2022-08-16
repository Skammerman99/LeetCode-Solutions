class Solution {
public:
    vector<int> findBall(vector<vector<int>>& grid) {
        vector<int> result;
        int finishCol;
        bool stuck;
        for(int i = 0; i < grid[0].size(); i++){
            finishCol = i;
            stuck = false;
            for(int level = 0; level < grid.size(); level++){
                if (grid[level][finishCol] == 1){
                    if( (finishCol >= grid[0].size() - 1 ) || (grid[level][finishCol+1] == -1) ){
                        result.push_back(-1);
                        stuck = true;
                        break;
                    }else{
                        finishCol += 1;
                    }
                }else if (grid[level][finishCol] == -1){
                    if( (finishCol < 1) || (grid[level][finishCol-1] == 1)){
                        result.push_back(-1);
                        stuck = true;
                        break;
                    }else{
                        finishCol -= 1;
                    }
                }
            }
            if (!stuck){
                result.push_back(finishCol);
            }
            
        }
        return result;
    }

};