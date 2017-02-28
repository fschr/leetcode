class Solution(object):
    def findMaxConsecutiveOnes(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        bestMax, cur = 0, 0
        for n in nums:
            if n == 1:
                cur += 1
                if cur > bestMax:
                    bestMax = cur
            else:
                cur = 0
        return bestMax
