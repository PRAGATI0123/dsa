class Solution(object):
    def sortedSquares(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        #appendleft() is a built-in method for collections.deque used to add an element directly to left end of the sequence
        answer = collections.deque()
        l, r = 0, len(nums)-1
        while l<=r:
            left_value, right_value = abs(nums[l]), abs(nums[r])
            if left_value > right_value:
                answer.appendleft(left_value*left_value)
                l+=1
            else:
                answer.appendleft(right_value*right_value)
                r-=1
        return list(answer)
        