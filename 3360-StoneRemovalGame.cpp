class Solution {
public:
    bool canAliceWin(int n) {

        int nxt(10), turn(0);
        while(nxt > 0){
            if(n >= nxt){n -= nxt--; turn = 1 - turn;}
            else return turn;
        }

        return true;
    }
};
