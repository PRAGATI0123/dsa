class Solution(object):
    def sortedSquares(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        # Edge cases
        if not nums:
            return nums
        if nums[0] >= 0:
            return [num**2 for num in nums]
        
        # Find index of the first positive number
        m = 0
        for i, n in enumerate(nums):
            if n >= 0:
                m = i
                break
        else:
            m = len(nums)

        # Split into positive (A) and absolute negative numbers (B)
        A = nums[m:]
        B = [-1 * n for n in reversed(nums[:m])]

        # Merge directly (no inner function to avoid scope errors)
        a = 0
        b = 0
        ret = []
        
        while a < len(A) and b < len(B):
            if A[a] < B[b]:
                ret.append(A[a])
                a += 1
            else:
                ret.append(B[b])
                b += 1
        
        # Gather up any leftovers
        if a < len(A):
            ret.extend(A[a:])
        else:
            ret.extend(B[b:])
            
        return [n**2 for n in ret]
