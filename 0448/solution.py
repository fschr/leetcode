class Solution(object):
    def findDisappearedNumbers(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        ret = set(range(1,len(nums)+1))
        for n in nums:
            if n in ret:
                ret.remove(n)
        return list(ret)
