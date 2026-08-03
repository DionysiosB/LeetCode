class Solution:
    def sortFeatures(self, features: List[str], responses: List[str]) -> List[str]:

        fm = {}
        for x in features: fm[x] = 0

        for response in responses:
            cs = set()
            for x in response.split():
                if x in fm: cs.add(x)

            for x in cs: fm[x] = fm[x] + 1

        v = list()
        for idx, feat in enumerate(features): v.append( (fm[feat], -idx, feat) )
        v.sort(reverse = True)

        for p in range(len(v)): v[p] = v[p][2]
        return v
