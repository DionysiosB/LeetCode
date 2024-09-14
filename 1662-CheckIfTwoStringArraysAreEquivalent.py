class Solution:
    def arrayStringsAreEqual(self, word1: List[str], word2: List[str]) -> bool:
       wa = "".join(word1)
       wb = "".join(word2)
       return wa == wb
