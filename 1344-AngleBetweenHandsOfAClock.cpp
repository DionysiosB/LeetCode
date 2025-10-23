class Solution {
public:
    double angleClock(int hour, int minutes) {
        double a = 30 * hour + 0.5 * minutes;
        double b = 6 * minutes;
        double diff = a - b;
        if(diff < 0){diff += 360;}
        if(diff > 360 - diff){diff = 360 - diff;}
        return diff;
    }
};
