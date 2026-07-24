class Solution:
    def largestInteger(self, nums: List[int], k: int) -> int:

        m = {}
        for p in range(len(nums) + 1 - k):
            ms = set()
            for q in range(k):
                ms.add(nums[p + q])
            for x in ms: m[x] = m.get(x, 0) + 1

        ans = -1
        for key, val in m.items():
            if val > 1: continue
            if ans < key: ans = key

        return ans

