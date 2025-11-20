class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
        std::set<int> s;
        for(size_t a = 0; a < digits.size(); a++){
            if(digits[a] % 2){continue;}
            for(size_t b = 0; b < digits.size(); b++){
                if(b == a){continue;}
                for(size_t c = 0; c < digits.size(); c++){
                    if(!digits[c] || c == a || c == b){continue;}
                    s.insert(100 * digits[c] + 10 * digits[b] + digits[a]);
                }
            }
        }

        std::vector<int> v;
        for(std::set<int>::iterator it = s.begin(); it != s.end(); it++){v.push_back(*it);}
        return v;
    }
};
