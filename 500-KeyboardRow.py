class Solution:
    def findWords(self, words: List[str]) -> List[str]:

        sra = set("qwertyuiop")
        srb = set("asdfghjkl")
        src = set("zxcvbnm")

        res = list()
        for w in words:
            sw = set(w.lower())
            if sw <= sra or sw <= srb or sw <= src:
                res.append(w)
        return res
