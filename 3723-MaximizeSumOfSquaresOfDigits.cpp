class Solution {
public:
    string maxSumOfSquares(int num, int sum) {

        if(!sum || sum > 9 * num){return "";}
        std::string s("");
        for(long p = 0; p < num; p++){
            if(sum >= 9){s += '9'; sum -= 9;}
            else if(sum){s += ('0' + sum); sum = 0;}
            else{s += '0';}
        }

        return s;
    }
};
