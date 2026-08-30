class Solution:
    def mostCommonWord(self, paragraph: str, banned: List[str]) -> str:

        paragraph = paragraph.replace('!', ' ').replace('?', ' ').replace("'", ' ').replace(',', ' ').replace(';', ' ').replace('.', ' ')
        words = [w.lower() for w in paragraph.split()]
        bs = set(banned)

        mcw = ""
        mxc = 0
        wcm = {}
        for word in words:
            if word in bs: continue

            if word not in wcm: wcm[word] = 0
            wcm[word] = wcm[word] + 1
            if wcm[word] > mxc:
                mxc = wcm[word]
                mcw = word

        return mcw


