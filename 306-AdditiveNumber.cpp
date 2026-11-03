class Solution {
public:
    bool isAdditiveNumber(string num) {

        std::vector<int> v;
        for(int p = 0; p < num.size(); p++){v.push_back(num[p] - '0');}

        long long a(v[0]), b(v[1]), x(0);
        for(long p = 2; p < v.size(); p++){
            x = 10 * x + v[p];
            if(x == a + b){a = b; b = x; x = 0;}
            else if(x > a + b){return false;}
        }

        return (x == 0);
    }
};
