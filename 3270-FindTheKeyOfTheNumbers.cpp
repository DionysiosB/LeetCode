class Solution {
public:
    int generateKey(int num1, int num2, int num3) {

        int res(0);
        for(int p = 0; p < 4; p++){
            int d1 = num1 % 10; num1 /= 10;
            int d2 = num2 % 10; num2 /= 10;
            int d3 = num3 % 10; num3 /= 10;
            res += pow(10, p) * std::min({d1, d2, d3});  
        }

        return res;
    }
};
