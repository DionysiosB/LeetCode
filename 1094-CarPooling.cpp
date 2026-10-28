class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {

        const int N = 1007;
        std::vector<int> v(N, 0);
        for(std::vector<int> w : trips){
            v[w[1]] += w[0];
            v[w[2]] -= w[0];
        }

        int total(0);
        for(int x : v){total += x; if(total > capacity){return false;}}
        return true;
    }
};
