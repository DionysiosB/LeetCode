class Solution {
public:
    string predictPartyVictory(string senate) {
        
        long vr(0), vd(0);
        bool blue(true), red(true);
        while(blue && red){
            blue = red = false;
            for(long p = 0; p < senate.size(); p++){
                if(senate[p] == 'D'){
                    blue = true;
                    if(vd > 0){--vd; senate[p] = 'X';}
                    else{++vr;}
                }
                else if(senate[p] == 'R'){
                    red = true;
                    if(vr > 0){--vr; senate[p] = 'X';}
                    else{++vd;}
                }
            }
        }

        return (blue ? "Dire" : "Radiant");
    }
};
