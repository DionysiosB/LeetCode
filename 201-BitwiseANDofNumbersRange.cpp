#include <iostream>

int rangeBitwiseAnd(int m, int n) {
    int common = 0xffffffff;

    while (common != 0) {
        if ((m & common) == (n & common)) {break;}
        common <<= 1;
    }

    return (m & common);
}


int main(){

    std::cout << rangeBitwiseAnd(2, 3) << std::endl;

    return 0;
}
