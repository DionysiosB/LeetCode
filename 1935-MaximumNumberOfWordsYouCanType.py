class Solution:
    def canBeTypedWords(self, text: str, brokenLetters: str) -> int:

        words = text.split(" ")
        broken = set(brokenLetters)

        cnt = 0
        for word in words:
            cur = True
            for b in broken:
                if b in word:
                    cur = False
                    break
            cnt += cur

        return cnt
