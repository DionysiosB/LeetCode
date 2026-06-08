class Solution {
public:
    int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob) {

        std::vector<int> md = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        for(int p = 1; p < md.size(); p++){md[p] += md[p - 1];}

        int monthA = 10 * (arriveAlice[0] - '0') + (arriveAlice[1] - '0');
        int dayA = 10 * (arriveAlice[3] - '0') + (arriveAlice[4] - '0');
        int startA = md[monthA - 1] + dayA;
        monthA = 10 * (leaveAlice[0] - '0') + (leaveAlice[1] - '0');
        dayA = 10 * (leaveAlice[3] - '0') + (leaveAlice[4] - '0');
        int stopA = md[monthA - 1] + dayA;

        int monthB = 10 * (arriveBob[0] - '0') + (arriveBob[1] - '0');
        int dayB = 10 * (arriveBob[3] - '0') + (arriveBob[4] - '0');
        int startB = md[monthB - 1] + dayB;
        monthB = 10 * (leaveBob[0] - '0') + (leaveBob[1] - '0');
        dayB = 10 * (leaveBob[3] - '0') + (leaveBob[4] - '0');
        int stopB = md[monthB - 1] + dayB;

        if(stopB < startA || stopA < startB){return 0;}
        int start = std::max(startA, startB);
        int stop = std::min(stopA, stopB);
        return stop - start + 1;        
    }
};
