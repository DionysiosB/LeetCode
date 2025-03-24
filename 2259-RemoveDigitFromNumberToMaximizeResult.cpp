class Solution {
public:
    string removeDigit(string number, char digit) {
        int idx(0);
        for(int p = 0; p < number.size(); p++){
            if(number[p] == digit){
                idx = p;
                if(p + 1 < number.size() && digit < number[p + 1]){break;}
            }
        }
        
        return (number.substr(0, idx) + number.substr(idx + 1));
    }
};
