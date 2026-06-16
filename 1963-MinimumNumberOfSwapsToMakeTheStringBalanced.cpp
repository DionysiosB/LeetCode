class Solution {
public:
    int minSwaps(string s) {

        int cs(0), bmn(0);
        for(char b : s){
            cs += (b == '[') - (b == ']');
            bmn = (bmn < cs ? bmn : cs);
        }

        return (-bmn + 1) / 2;   
    }
};
