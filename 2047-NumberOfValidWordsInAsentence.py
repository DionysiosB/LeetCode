class Solution:
    def countValidWords(self, sentence: str) -> int:
        def check(word):
            hyphen = False
            for pos,ch in enumerate(word):
                if ch.isdigit() or ch in "!.," and pos != len(word) - 1: return False
                elif ch == '-':
                    if hyphen or pos == 0 or pos == len(word) - 1 or not word[pos + 1].isalpha(): return False
                    hyphen = True
            return True

        return sum([check(word) for word in sentence.split()])
