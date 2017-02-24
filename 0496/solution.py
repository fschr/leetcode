class Solution(object):
    def nextGreaterElement(self, findNums, nums):
        """
        :type findNums: List[int]
        :type nums: List[int]
        :rtype: List[int]
        """
        nge = dict()
        toDoStack = []
        for num in nums:
            while toDoStack and toDoStack[-1] < num:
                nge[toDoStack.pop()] = num
            toDoStack.append(num)
        return [nge[f] if f in nge else -1 for f in findNums]
        
