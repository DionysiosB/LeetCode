class Solution {
public:
    string categorizeBox(int length, int width, int height, int mass) {
        bool bulky = (length >= 1e4) || (width >= 1e4) || (height >= 1e4) || (1LL * length * width * height >=1e9);
        bool heavy = (mass >= 100);

        if(bulky && heavy){return "Both";}
        else if(bulky){return "Bulky";}
        else if(heavy){return "Heavy";}
        else{return "Neither";}
    }
};
