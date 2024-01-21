class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int startColor = image[sr][sc];
        if(startColor == color){
            return image;
        }
        return floodFill(image, sr,sc,color, startColor);
    }
    
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color, int startColor) {
        if(image[sr][sc] == startColor){
            image[sr][sc] = color;
        }
        if(sr > 0 && image[sr-1][sc] == startColor){
            floodFill(image, sr - 1,sc, color, startColor);
        }
        if(sr < image.size() - 1 && image[sr+1][sc] == startColor){
            floodFill(image, sr + 1,sc,color, startColor);
        }
        if(sc > 0 && image[sr][sc-1] == startColor){
            floodFill(image, sr,sc-1,color, startColor);
            
        }
        if(sc < image[0].size() - 1 && image[sr][sc+1] == startColor){
            floodFill(image, sr,sc+1,color, startColor);
        }
        return image;
        
    }

};