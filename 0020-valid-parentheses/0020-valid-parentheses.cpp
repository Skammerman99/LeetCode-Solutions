class Solution {
public:
    bool isValid(string s) {
        if(s.length() <= 1){
            return false;
        }
        std::stack<char> stacker;
        for(char c: s){
            if(c == '(' || c == '{' || c == '['){
                stacker.push(c);
            }else{
                if(stacker.empty()){
                    return false;
                }else{
                    std::cout << stacker.top() << std::endl;
                    if(c == ')' && stacker.top() == '('){
                        stacker.pop();
                    }else if(c == ']' && stacker.top() == '['){
                        stacker.pop();
                    }else if(c == '}' && stacker.top() == '{'){
                        stacker.pop();
                    }else{
                        return false;
                    }
                }
            }
        }
        if(stacker.empty()){
            return true;
        }
        return false;
    }
};