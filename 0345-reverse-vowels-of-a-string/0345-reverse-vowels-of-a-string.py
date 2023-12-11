class Solution:
    def reverseVowels(self, s: str) -> str:
        vowels = []
        ans = ""
        for char in s:
            if char in "aeiouAEIOU":
                vowels.append(char)
        for i in range(len(s)):
            if s[i] in "aeiouAEIOU":
                ans += vowels[-1]
                vowels.pop(-1)
            else:
                ans += s[i]
                
            
        return ans
        