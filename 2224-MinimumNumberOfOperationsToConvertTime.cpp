class Solution {
public:
    int convertTime(string current, string correct) {
        
        int start  = 60 * (10 * (current[0] - '0') + (current[1] - '0')) + (10 * (current[3] - '0') + (current[4] - '0'));
        int target = 60 * (10 * (correct[0] - '0') + (correct[1] - '0')) + (10 * (correct[3] - '0') + (correct[4] - '0'));
        int diff = target - start; if(diff < 0){diff += 24 * 60;} 
        int cnt(0);
        cnt += (diff / 60); diff %= 60;
        cnt += (diff / 15); diff %= 15;
        cnt += (diff / 5); diff %= 5;
        cnt += diff;
        return cnt;
    }
};
