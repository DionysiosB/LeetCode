class Solution {
public:
    bool haveConflict(vector<string>& event1, vector<string>& event2) {
        int startA = 60 * (10 * (event1[0][0] - '0') + (event1[0][1] - '0')) + 10 * (event1[0][3] - '0') + (event1[0][4] - '0');
        int stopA  = 60 * (10 * (event1[1][0] - '0') + (event1[1][1] - '0')) + 10 * (event1[1][3] - '0') + (event1[1][4] - '0');
        
        int startB = 60 * (10 * (event2[0][0] - '0') + (event2[0][1] - '0')) + 10 * (event2[0][3] - '0') + (event2[0][4] - '0');
        int stopB  = 60 * (10 * (event2[1][0] - '0') + (event2[1][1] - '0')) + 10 * (event2[1][3] - '0') + (event2[1][4] - '0');

        return !(stopA < startB || stopB < startA);  
    }
};
