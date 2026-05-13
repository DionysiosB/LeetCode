class Solution:
    def reformatNumber(self, number: str) -> str:
        number = number.replace(" ", "")
        number = number.replace("-", "")
        blocks = [number[k:k + 3] for k in range(0, len(number), 3)]
        if len(blocks[-1]) == 1:
            x = blocks[-2] + blocks[-1];
            blocks = blocks[:-2] + [x[:2]] + [x[2:]]
        return "-".join(blocks)
