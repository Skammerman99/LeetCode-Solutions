class Solution:
    def partitionString(self, s: str) -> int:
        ans = [""]
        for char in s:
            if char in ans[-1]:
                ans.append("" + char)
            else:
                ans[-1] += char
        return len(ans)