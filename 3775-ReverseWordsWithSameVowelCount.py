class Solution:
    def reverseWords(self, s: str) -> str:

        def cntvowels(s):
            cnt = 0
            for x in s:
                if x in "aeiou": cnt += 1
            return cnt

        v = s.split()
        fv = cntvowels(v[0])
        for p in range(1, len(v)):
            if cntvowels(v[p]) == fv: v[p] = v[p][::-1]

        return " ".join(v)

