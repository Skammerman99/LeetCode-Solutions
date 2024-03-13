class Solution:
    def strStr(self, haystack: str, needle: str) -> int:
        if len(haystack) < len(needle):
            return -1
        else:
            for i in range(len(haystack) - len(needle) + 1):
                print(haystack[i:i+len(needle)])
                if haystack[i:i+len(needle)] == needle:
                    return i
        
            return -1
        