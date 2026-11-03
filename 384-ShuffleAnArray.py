class Solution:

    def __init__(self, nums: List[int]):
        from copy import deepcopy
        self.original = deepcopy(nums)
        self.current = deepcopy(nums)


    def reset(self) -> List[int]:
        return self.original


    def shuffle(self) -> List[int]:
        from random import shuffle
        shuffle(self.current)
        return self.current


# Your Solution object will be instantiated and called as such:
# obj = Solution(nums)
# param_1 = obj.reset()
# param_2 = obj.shuffle()
