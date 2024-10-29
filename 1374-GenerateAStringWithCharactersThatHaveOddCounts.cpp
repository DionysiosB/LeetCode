class Solution {
public:
    string generateTheString(int n) {
        std::string res(n, 'a');
        if(n % 2 == 0){res.back() = 'b';}
        return res;
    }
};
