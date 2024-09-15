class Solution:
    def mostWordsFound(self, sentences: List[str]) -> int:
        mx = 0
        for s in sentences:
            cnt = len(s.split())
            mx = cnt if cnt > mx else mx
        return mx
