class Solution:
    def compareVersion(self, version1: str, version2: str) -> int:

        v1 = [int(x) for x in version1.split('.')]
        v2 = [int(x) for x in version2.split('.')]

        while len(v1) != len(v2):
            if len(v1) < len(v2): v1.append(0)
            else: v2.append(0)


        for p in range(len(v1)):
            if(v1[p] < v2[p]): return -1
            elif(v1[p] > v2[p]): return 1

        return 0
