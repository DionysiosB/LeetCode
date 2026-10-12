class Solution {
public:
    bool sumGame(string num) {

        const int n = num.size();
        int bal(0), balq(0);
        for (int p = 0; p < n; p++) {
            if(num[p] == '?') {balq += (p < n / 2 ? 1 : -1);}
            else{bal += (p < n / 2 ? 1 : -1) * (num[p] - '0');}
        }
        return (balq & 1) || (bal + balq * 9 / 2 != 0);
    }
};
