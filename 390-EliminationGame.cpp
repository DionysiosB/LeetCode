#include <iostream>

long lastRemaining(long n, bool isInverse){

    if(n == 1){return 1;}
    else if(isInverse == 0){return 2 * lastRemaining(n / 2, 1);}
    else if(isInverse == 1){return 2 * lastRemaining(n / 2, 0) - (n % 2 == 0);}
    return 0;
}




int main(){

    long n = 30;
    std::cout << lastRemaining(n, 0) << std::endl;

    return 0;
}
