class Solution {
public:
    int maxHeightOfTriangle(int red, int blue) {

        int a(red), b(blue);
        int g(0), h(0);
        for(int p = 1; p <= 107; p++){
            if(p % 2){a -= p;}
            else{b -= p;}
            if(a < 0 || b < 0){break;}
            g = p;
        }

        a = blue; b = red;
        for(int p = 1; p <= 107; p++){
            if(p % 2){a -= p;}
            else{b -= p;}
            if(a < 0 || b < 0){break;}
            h = p;
        }

        return (h > g ? h : g);
    }
};
