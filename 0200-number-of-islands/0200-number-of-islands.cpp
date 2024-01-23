class Solution {
public:
    std::set<std::pair<int,int>> checked;
    int numIslands(vector<vector<char>>& grid) {        
        int sum = 0;
        for(int i = 0; i < grid.size(); i++){
            for(int j = 0; j < grid[0].size(); j++){
                if(grid[i][j] == '1' && !checked.contains(std::make_pair(i,j)) && isIsland(grid,i,j)){
                    sum ++;
                }
            }
        }
        return sum;
        
    }
    
    bool isIsland(vector<vector<char>>& grid, int i, int j){
        //std::cout << "i|j: " << i << " | " << j << std::endl; 
        if(grid[i][j] == '0' ){
            checked.insert(std::make_pair(i,j));
            //std::cout << "found water" << std::endl;
            return false;
        }
        else{
            //std::cout << "found land" << std::endl;
            checked.insert(std::make_pair(i,j));            
            if(i > 0 && !checked.contains(std::make_pair(i-1,j))){
                isIsland(grid,i-1,j);
                checked.insert(std::make_pair(i-1,j));            
            }
            if(i < grid.size() - 1 && !checked.contains(std::make_pair(i+1,j))){
                isIsland(grid,i+1,j);
                checked.insert(std::make_pair(i+1,j));
                }
            if(j > 0 && !checked.contains(std::make_pair(i,j-1))){
                isIsland(grid,i,j - 1);
                checked.insert(std::make_pair(i,j-1));
            }
            if(j < grid[0].size() - 1 && !checked.contains(std::make_pair(i,j+1))){
                isIsland(grid,i,j+1);
                checked.insert(std::make_pair(i,j+1));
            }
            return true;
        }
    }
};