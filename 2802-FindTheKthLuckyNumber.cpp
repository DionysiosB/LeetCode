class Solution {
public:
    string kthLuckyNumber(int k) {

        // Replace 4 with 0 and 7 with 1; Then add an '1' at the MSB
        ++k;
        std::string s("");
        while(k > 1){
            std::string left = (k % 2 ? "7" : "4");
            s = left + s;
            k /= 2;
        }

        return s;
    }
};
