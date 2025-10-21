class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        int res(0);
        std::unordered_map<int, int> f;
        for(int p = 0; p < time.size(); p++){
            int x = time[p] % 60;
            int y = (60 - x) % 60;
            if(f.count(y)){res += f[y];}
            ++f[x];
        }
        return res;
    }
};
