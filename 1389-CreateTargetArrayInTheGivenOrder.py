class Solution(object):
    def createTargetArray(self, nums, index):
        """
        :type nums: List[int]
        :type index: List[int]
        :rtype: List[int]
        """

        ret = list()
        for p in range(len(nums)): ret.insert(index[p], nums[p])
        return re
