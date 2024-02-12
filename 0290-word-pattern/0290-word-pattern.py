class Solution:
    def wordPattern(self, pattern: str, s: str) -> bool:
        words = s.split(' ')

        if(len(pattern) != len(words)):
            return False
        
        patternToWord = dict()
        
        wordIndex = 0;
        for c in pattern:
            if c not in patternToWord.keys() and words[wordIndex] not in patternToWord.values():
                patternToWord[c] = words[wordIndex]
            else:
                if c not in patternToWord.keys():
                    return False
                elif patternToWord[c] != words[wordIndex]:
                    return False               
                    
            wordIndex += 1;
        return True