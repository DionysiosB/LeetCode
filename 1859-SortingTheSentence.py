class Solution:
    def sortSentence(self, s: str) -> str:
        w = [(x[-1], x[:-1]) for x in s.split()]
        return " ".join([x[1] for x in sorted(w)])

