class Solution {
public:
    int numberOfSteps(int num) {
        int cnt(0);
        while(num){
            cnt += (num % 2) + (num > 1);
            num /= 2;
        }

        return cnt;
    }
}
