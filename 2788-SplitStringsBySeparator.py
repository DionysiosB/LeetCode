class Solution:
    def splitWordsBySeparator(self, words: List[str], separator: str) -> List[str]:
        res = list()
        for w in words:
            cl = w.split(sep=separator)
            cm = [x for x in cl if len(x) > 0]
            res.extend(cm)
        return res
