class Solution {
public:
    string similarRGB(string color) {

        std::string res(color);

        for(int p = 1; p + 1 < color.size(); p += 2){
            int cur(0);
            if('0' <= color[p] && color[p] <= '9'){cur = 16 * (color[p] - '0');}
            else{cur = 16 * (10 + color[p] - 'a');}

            if('0' <= color[p + 1] && color[p + 1] <= '9'){cur += (color[p + 1] - '0');}
            else{cur += (10 + color[p + 1] - 'a');}

            int cmn(1e6);
            for(int r = 0; r < 16; r++){
                int tst = (17 * r - cur) * (17 * r - cur);
                if(tst < cmn){
                    cmn = tst;
                    if(r < 10){res[p] = res[p + 1] = '0' + r;}
                    else{res[p] = res[p + 1] = 'a' + r - 10;}
                }
            }
        }

        return res;
    }
};
