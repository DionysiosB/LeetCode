class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& values) {

        int prevmax(values[0]);
        int res(0);
        for(size_t p = 1; p < values.size(); p++){
            int tst = prevmax + values[p] - p;
            res = (res > tst ? res : tst);
            int nxt = values[p] + p;
            prevmax = (prevmax > nxt ? prevmax : nxt);
        }

        return res;
    }
};
