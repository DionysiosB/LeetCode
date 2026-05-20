class Solution:
    def findOcurrences(self, text: str, first: str, second: str) -> List[str]:

        words = text.split(" ")
        res = list()
        for p in range(2, len(words)):
            if words[p - 2] == first and words[p - 1] == second:
                res.append(words[p])
        return res
        
