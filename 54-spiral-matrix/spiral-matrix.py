class Solution(object):
    def spiralOrder(self, matrix):
        """
        :type matrix: List[List[int]]
        :rtype: List[int]
        """
        res=[]
        while matrix:
             #adding first row in order
             res+=(matrix.pop(0))

             #adding last element of all lists in matrix
             if matrix and matrix[0]:
                for row in matrix:
                    res.append(row.pop())
             if matrix:
                res+=(matrix.pop()[::-1])
             if matrix and matrix[0]:
                for row in matrix[::-1]:
                    res.append(row.pop(0))

        return res

        