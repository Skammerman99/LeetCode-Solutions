class Solution:
    def kidsWithCandies(self, candies: List[int], extraCandies: int) -> List[bool]:
        ans = []
        greatest = max(candies)
        for kid in candies:
            if kid + extraCandies >= greatest:
                ans.append(True)
            else:
                ans.append(False)
        return ans