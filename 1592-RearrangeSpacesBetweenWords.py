class Solution:
    def reorderSpaces(self, text: str) -> str:

        cnt = 0
        for c in text: cnt += (c == ' ')

        v = text.split()

        div = (cnt // (len(v) - 1)) if len(v) > 1 else 0
        rem = (cnt - (len(v) - 1) * div)

        div = " " * div
        rem = " " * rem

        text = div.join(v)
        text += rem
        return text
