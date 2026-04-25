class Solution:
    def isCircularSentence(self, sentence: str) -> bool:
        words = sentence.split()
        if words[0][0] != words[-1][-1]: return False
        for p in range(1, len(words)):
            if words[p - 1][-1] != words[p][0]:
                return False
        return True
