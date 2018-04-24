#include <iostream>
#include <vector>

std::vector<int> countBits(int num){

    std::vector<int> count;
    if(num < 0){return count;}
    count.push_back(0);
    if(num == 0){return count;}

    long pow(1);
    while(count.size() < num + 1){
        for(long p = 0; p < pow; p++){
            count.push_back(1 + count[p]);
            if(count.size() >= num + 1){break;}
        }
        if(count.size() >= num + 1){break;}
        if(count.size() >= pow){pow *= 2;}
    }

    return count;
}

int main(){

    std::vector<int> cb = countBits(100);
    for(int p = 0; p < cb.size(); p++){std::cout << p << " -> " << cb[p] << std::endl;}

    return 0;
}
