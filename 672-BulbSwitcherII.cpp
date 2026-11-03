class Solution {
public:
    int flipLights(int n, int presses) {

        n = (n < 3 ? n : 3);
        if(presses == 0){return 1;}
        else if(n == 1){return 2;}
        else if(presses == 1){return (n == 2 ? 3 : 4);}
        else if(presses == 2){return (n == 2 ? 4 : 7);}
        else{return n == 2 ? 4 : 8;}

        return -1;
    }
};
