class Solution:
    def reverseWords(self, s: str) -> str:
        words = s.split(" ")
        words.reverse()
        ans = ""
        print(words)
        for word in words:
            if word == "":
                continue
            for char in word:
                if char != " ":
                    ans += char
            ans += " "
            
        return ans[:-1]