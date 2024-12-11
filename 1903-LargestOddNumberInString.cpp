class Solution {
public:
    string largestOddNumber(string num) {
        int idx(-1);
        for(int p = num.size(); p >= 0; p--){
            if(num[p] % 2){idx = p; break;}
        }

        return (idx < 0) ? "" : num.substr(0, idx + 1);
    }
}
