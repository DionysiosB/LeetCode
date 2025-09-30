class Solution {
public:
    int captureForts(vector<int>& forts) {
        int cnt(0), res(0); bool move(false);
        for(int p = 0; p < forts.size(); p++){
            if(forts[p] == 1){move = true; cnt = 0;}
            else if(forts[p] == 0){cnt += move;}
            else if(forts[p] == -1){res = (res > cnt ? res : cnt); move = false; cnt = 0;}
        }
        cnt = 0; move = false;
        for(int p = forts.size() - 1; p >= 0; p--){
            if(forts[p] == 1){move = true; cnt = 0;}
            else if(forts[p] == 0){cnt += move;}
            else if(forts[p] == -1){res = (res > cnt ? res : cnt); move = false; cnt = 0;}
        }

        return res;
    }
};
