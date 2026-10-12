class Solution:
    def countOddLetters(self, n: int) -> int:
        digits = str(n)
        words = []
        for each_digit in digits:
            each_digit = int(each_digit)
            if each_digit == 1:
                words.append("one")
            elif each_digit == 2:
                words.append("two")
            elif each_digit == 3:
                words.append("three")
            elif each_digit == 4:
                words.append("four")
            elif each_digit == 5:
                words.append("five")
            elif each_digit == 6:
                words.append("six")
            elif each_digit == 7:
                words.append("seven")
            elif each_digit == 8:
                words.append("eight")
            elif each_digit == 9:
                words.append("nine")
            elif each_digit == 0:
                words.append("zero")
            else:
                raise ValueError(f"Unexpected value: {each_digit}")

        unified_string = "".join(words)
        word_counts = Counter(unified_string)

        total_odd_frequency = 0

        for each_count in word_counts.values():
            is_odd_frequency = each_count % 2 == 1

            if is_odd_frequency:
                total_odd_frequency += 1

        return total_odd_frequency
