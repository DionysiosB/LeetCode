class Solution:
    def areNumbersAscending(self, s: str) -> bool:
        numbers = [int(x) for x in s.split() if x.isdigit()]
        for p in range(1, len(numbers)):
            if numbers[p - 1] >= numbers[p]:
                return False
        return True
