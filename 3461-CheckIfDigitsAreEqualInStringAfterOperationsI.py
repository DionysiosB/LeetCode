class Solution:
    def hasSameDigits(self, s: str) -> bool:

        v = [0] * len(s)
        for p in range(len(s)): v[p] = int(s[p])

        while len(v) > 2:
            w = list()
            for p in range(len(v) - 1): w.append( (v[p] + v[p + 1]) % 10)
            v = w

        return v[0] == v[1]
