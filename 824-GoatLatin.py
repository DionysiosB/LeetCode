class Solution:
    def toGoatLatin(self, sentence: str) -> str:

        words = sentence.split()
        for p in range(len(words)):
            if words[p][0] not in "aeiouAEIOU": words[p] = words[p][1:] + words[p][0]
            words[p] += "ma" + (p + 1) * "a"

        return " ".join(words)
