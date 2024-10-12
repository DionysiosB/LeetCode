class Solution {
public:
    int minMovesToSeat(vector<int>& seats, vector<int>& students) {
        sort(seats.begin(), seats.end());
        sort(students.begin(), students.end());
        int total(0);
        for(int p = 0; p < seats.size(); p++){
            int diff = seats[p] - students[p];
            diff = (diff > 0 ? diff : -diff);
            total += diff;
        }

        return total;
    }
};
