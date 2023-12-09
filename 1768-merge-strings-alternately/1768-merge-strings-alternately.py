class Solution:
    def mergeAlternately(self, word1: str, word2: str) -> str:
        ans = ""
        index = 0
        if len(word1) > len(word2):
            for i in range(len(word2)):
                ans += word1[i]
                ans += word2[i]
                index+=1 
            ans += word1[index:]
        else:
            for i in range(len(word1)):
                ans += word1[i]
                ans += word2[i]
                index+=1
            ans += word2[index:]
        return ans
