class Solution {
public:
    int distanceTraveled(int x, int y){

        int z(0);
        while(x >= 5){
            int div = x / 5;
            int mod = x % 5;
            int add = (y < div ? y : div);
            z += 5 * div; x = mod + add; y -= add;
        }

        z += x;
        return 10 * z;
    }
};
