class Solution:
    def countSeniors(self, details: List[str]) -> int:
       cnt = 0
       for cur in details: cnt = cnt + (int(cur[11:13]) > 60)
       return cnt
