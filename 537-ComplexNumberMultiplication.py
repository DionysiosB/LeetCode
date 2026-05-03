class Solution:
    def complexNumberMultiply(self, num1: str, num2: str) -> str:

        r1, c1 = num1.split('+')
        r2, c2 = num2.split('+')
        r1, c1 = int(r1), int(c1[:-1])
        r2, c2 = int(r2), int(c2[:-1])

        r = r1 * r2 - c1 * c2
        c = r1 * c2 + r2 * c1
        num = str(r) + "+" + str(c) + 'i'
        return num
        
