class Solution {
public:
    std::map<int,int> solved;
    int climbStairs(int n) {
        if(n == 1){
            return 1;
        }else if (n == 2){
            return 2;
        }else if(solved.find(n) != solved.end()){
            return solved[n];
        }
        else{
            solved[n] = climbStairs(n - 1) + climbStairs(n - 2);
            return solved[n];
        }
        
    }
};