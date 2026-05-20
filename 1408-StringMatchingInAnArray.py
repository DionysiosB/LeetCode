class Solution:
    def stringMatching(self, words: List[str]) -> List[str]:

        res = list()
        for p in range(len(words)):
            for q in range(len(words)):
                if p == q: continue
                if words[p] in words[q]: res.append(words[p])
        return list(set(res));
        
