// The rand7() API is already defined for you.
// int rand7();
// @return a random integer in the range 1 to 7

class Solution {
public:
    int rand10() {
        
        int s(50);
        do{
            int x = rand7();
            int y = rand7();
            s = 7 * (x - 1) + (y - 1);
            if(s < 40){return 1 + s / 4;}
        }while(s >= 40);
        
        return 0;
    }
};
