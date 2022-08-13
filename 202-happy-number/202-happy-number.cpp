class Solution {
public:
    bool isHappy(int n) {
        vector<int> reached;
        return isHappyRecursive(n, reached);
    }
    
    bool isHappyRecursive(int n, vector<int>& reached){
        std::vector< int > arr;
        while (n >= 10){
            arr.push_back(n%10);
            n = n/10;
        }
        arr.push_back(n);
        int sum = 0;
        for(int num:arr){
            sum += pow(num,2);
        }
        if(sum == 1){
            return true;
        }
        else if(std::find(reached.begin(), reached.end(), sum) != reached.end()){
            return false;
        }
        else{
            reached.push_back(sum);
            return isHappyRecursive(sum,reached);
        }
    
    }
};