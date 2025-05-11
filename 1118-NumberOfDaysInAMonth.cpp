class Solution {
public:
    int numberOfDays(int year, int month) {
        int monthDays[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        return monthDays[month - 1] + (month == 2 && ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0));
    }
};
