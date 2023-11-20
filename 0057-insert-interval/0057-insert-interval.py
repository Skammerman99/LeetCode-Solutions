class Solution:
    def insert(self, intervals: List[List[int]], newInterval: List[int]) -> List[List[int]]:
        ans_intervals = []
        intervals.append(newInterval)
        intervals = sorted(intervals)
        for interval in intervals:
            if ans_intervals and ans_intervals[-1][1] >= interval[0]:
                ans_intervals[-1][1] = max(ans_intervals[-1][1], interval[1])
            else:
                ans_intervals.append(interval)
                
        return ans_intervals
                