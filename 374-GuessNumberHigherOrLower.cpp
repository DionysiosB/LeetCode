// Forward declaration of guess API.
// @param num, your guess
// @return -1 if my number is lower, 1 if my number is higher, otherwise return 0
int guess(int num);

class Solution {
public:
    long long guessNumber(long long n) {
        
        long long  low(1), high(n);
        while(low <= high){
            long long mid = (low + high) / 2;
            long long test = guess(mid);
            if(test == 0){return mid;}
            else if(test == 1){low = mid + 1;}
            else if(test == -1){high = mid - 1;}
            std::cout << mid << std::endl;
        }
        
        return 0;
    }
};
