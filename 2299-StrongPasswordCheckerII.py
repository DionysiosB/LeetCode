class Solution:
    def strongPasswordCheckerII(self, password: str) -> bool:

        if len(password) < 8: return False
        prev = 0
        upper = False
        lower = False
        digit = False
        special = False
        for x in password:
            if x.isupper(): upper = True
            if x.islower(): lower = True
            if x.isdigit(): digit = True
            if x in "!@#$%^&*()-+": special = True
            if x == prev: return False
            prev = x
        return upper and lower and digit and special

