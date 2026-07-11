class Solution {
public:

    int gcd(int a, int b){return b ? gcd(b, a % b) : a;}

    vector<string> simplifiedFractions(int n) {

        std::set<std::string> f;
        for(int den = 2; den <= n; den++){
            for(int num = 1; num < den; num++){
                int cn = num;
                int cd = den;
                int g = gcd(num, den);
                cn /= g; cd /= g;
                std::string s = std::to_string(cn) + "/" + std::to_string(cd);
                f.insert(s);
            }
        }

        std::vector<std::string> v;
        for(std::string s : f){v.push_back(s);}
        return v;
    }
};
