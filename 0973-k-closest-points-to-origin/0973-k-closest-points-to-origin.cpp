bool compareDistance(vector<int> point1, vector<int> point2){
    return ( sqrt(pow(point1[0], 2) + pow(point1[1], 2) ) < sqrt(pow(point2[0], 2) + pow(point2[1], 2) ) );
}


class Solution {
public:

    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        vector<vector<int>> results{points};
        std::sort(results.begin(), results.end(), compareDistance);
        return vector<vector<int>>(results.begin(), results.begin() + k);
    }
};