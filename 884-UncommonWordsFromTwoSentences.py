class Solution:
    def uncommonFromSentences(self, s1: str, s2: str) -> List[str]:
        w1 = s1.split();
        w2 = s2.split();

        wd = dict()
        for word in w1:
            if word in wd: wd[word] += 1
            else: wd[word] = 1
        for word in w2:
            if word in wd: wd[word] += 1
            else: wd[word] = 1

        res = []
        for word in wd:
            if wd[word] == 1: res.append(word)
        return res

            
