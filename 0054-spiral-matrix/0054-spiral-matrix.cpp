class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        
        std::vector<int> result;
        
        int topRow = 0;
        int botRow = matrix.size() - 1;
        int leftCol = 0;
        int rightCol = matrix[0].size() - 1;
        
        while(topRow <= botRow && leftCol <= rightCol){
            for(int i = leftCol; i <= rightCol && topRow <= botRow; i++){
                result.push_back(matrix[topRow][i]);
            }
            topRow++;
            for(int i = topRow; i <= botRow && leftCol <= rightCol; i++){
                result.push_back(matrix[i][rightCol]);
            }
            rightCol--;
            for(int i = rightCol; i >= leftCol && topRow <= botRow; i--){
                result.push_back(matrix[botRow][i]);
            }
            botRow--;
            for(int i = botRow; i >= topRow && leftCol <= rightCol; i--){
                result.push_back(matrix[i][leftCol]);
            }
            leftCol++;
        }
        return result;

    }
};