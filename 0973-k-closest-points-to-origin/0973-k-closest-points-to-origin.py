class Solution:
    def kClosest(self, points: List[List[int]], k: int) -> List[List[int]]:
        results = []
        points = sorted(points, key= lambda x: sqrt(pow(x[0],2) + pow(x[1],2) ) )
        return points[0:k]