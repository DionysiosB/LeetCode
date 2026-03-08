class Solution {
public:
    int countCompleteDayPairs(vector<int>& hours) {
        const int H = 24;
        std::vector<int> v(H);
        for(int p = 0; p < hours.size(); p++){++v[hours[p] % H];}
        int cnt(v[0] * (v[0] - 1) / 2 + v[H / 2] * (v[H/2] - 1) / 2);
        for(int p = 1; p < H / 2; p++){cnt += v[p] * v[H - p];}
        return cnt;
    }
};
