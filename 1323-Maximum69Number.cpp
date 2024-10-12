class Solution {
public:
    int maximum69Number (int num) {
        std::vector<int> d;
        while(num){d.push_back(num % 10); num /= 10;}
        for(int p = d.size() - 1; p >= 0; p--){
            if(d[p] == 6){d[p] = 9; break;}
        }
        int ans(0); for(int p = d.size() - 1; p >= 0; p--){ans = 10 * ans + d[p];}
        return ans;
    }
};
