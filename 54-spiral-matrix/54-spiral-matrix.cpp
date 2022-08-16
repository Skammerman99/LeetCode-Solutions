class Solution {
public:
    
    bool checkAns(vector<vector<int>>& matrix, vector<int>& ans){
        return (matrix.size()*matrix[0].size() == ans.size());
    }
    
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int topRow = 0;
        int botRow = matrix.size() - 1;
        int rightCol = matrix[0].size() - 1;
        int leftCol = 0;
        vector<int> result;
        
        while(topRow <= botRow && leftCol <= rightCol){
        
            for(int i = leftCol; i <= rightCol; i++){
                result.push_back(matrix[topRow][i]);
            }
            topRow++;
            
            if (checkAns(matrix, result)){
                return result;
            }

            for(int j = topRow; j <= botRow; j++){
                result.push_back(matrix[j][rightCol]);
            }
            rightCol--;
            
            if (checkAns(matrix, result)){
                return result;
            }


            for(int k = rightCol; k >= leftCol; k--){
                result.push_back(matrix[botRow][k]);
            }
            botRow--;
            
            if (checkAns(matrix, result)){
                return result;
            }


            for(int n = botRow; n >= topRow; n--){
                result.push_back(matrix[n][leftCol]);
            }
            leftCol++;
            
            if (checkAns(matrix, result)){
                return result;
            }

        }
        
        return result;
    }
};