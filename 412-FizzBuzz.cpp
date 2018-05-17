class Solution {
public:
    std::vector<std::string> fizzBuzz(int n) {
        
        std::vector<std::string> a;
        for(int p = 1; p <= n; p++){
            if(p % 15 == 0){a.push_back("FizzBuzz");}
            else if(p % 3 == 0){a.push_back("Fizz");}
            else if(p % 5 == 0){a.push_back("Buzz");}
            else{a.push_back(std::to_string(p));}
        }
        return a;
    }
};
