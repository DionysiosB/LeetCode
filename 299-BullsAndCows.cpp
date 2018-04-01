#include <iostream>

class Solution {
    public:
        std::string getHint(std::string secret, std::string guess){
            const int D = 10;
            int bulls(0);
            std::vector<int> countSecret(D, 0);
            std::vector<int> countGuess(D, 0);
            for(size_t p = 0; p < secret.size(); p++){
                bulls += (secret[p] == guess[p]);
                ++countSecret[secret[p] - '0'];
                ++countGuess[guess[p] - '0'];
            }

            int cows(0);
            for(int p = 0; p < D; p++){cows += (countSecret[p] < countGuess[p]) ? countSecret[p] : countGuess[p];}
            cows -= bulls;

            std::string res = std::to_string(bulls) + "A" + std::to_string(cows) + "B";
            return res;
        }
};
