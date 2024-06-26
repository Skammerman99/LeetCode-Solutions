class Solution {
public:
    int maxVowels(string s, int k) {
        set<char> vowels;
        vowels.insert('a');
        vowels.insert('e');
        vowels.insert('i');
        vowels.insert('o');
        vowels.insert('u');
        int max = 0;
        for(int i = 0; i < k; i++){
            if(vowels.count(s[i])){
                max ++;
            }
        }
        int left = 0;
        int right = k-1;
        int current_vowels = max;
        while(right+1 < s.size()){
            if(vowels.count(s[left])){
                current_vowels--;
            }
            if(vowels.count(s[right+1])){
                current_vowels++;
            }
            if(current_vowels > max){
                max = current_vowels;
            }
            left++;
            right++;
        }
        return max;
    }
};