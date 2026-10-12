class Solution:
    def generateTag(self, caption: str) -> str:
        words = caption.split()
        tag = "#"
        first_word = True

        for word in words:
            filtered = ''.join([c for c in word if c.isalpha()])
            if not filtered: continue
            if first_word:
                tag += filtered.lower()
                first_word = False
            else:
                tag += filtered.capitalize()

        return tag[:100]

