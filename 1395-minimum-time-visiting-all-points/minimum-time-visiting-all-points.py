class Solution(object):
    def minTimeToVisitAllPoints(self, points):
        """
        :type points: List[List[int]]
        :rtype: int
        """
        res = 0
        x1,y1 = points.pop()
        while points:
            x2,y2 = points.pop()
            res += max(abs(y2-y1),abs(x2-x1))
            x1,y1 = x2,y2
        return res
        