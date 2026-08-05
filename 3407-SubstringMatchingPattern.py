class Solution:
    def hasMatch(self, s: str, p: str) -> bool:

        plist = p.split('*')
        lp = plist[0]
        rp = plist[1]

        leftidx = s.find(lp)
        rightidx = s.rfind(rp)

        if len(lp) > 0 and leftidx < 0: return False
        if len(rp) > 0 and rightidx < 0: return False

        return leftidx + len(lp) <= rightidx
