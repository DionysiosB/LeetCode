class Solution:
    def licenseKeyFormatting(self, s: str, k: int) -> str:
       w = "".join(s.split('-')).upper()
       wv = list()
       if len(w) % k: wv.append(w[0: len(w) % k])
       for p in range(len(w) % k, len(w), k):
           wv.append(w[p:(p + k)])
       res = "-".join(wv)
       return res
