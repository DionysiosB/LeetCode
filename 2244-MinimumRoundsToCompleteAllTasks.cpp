class Solution {
public:
    int minimumRounds(vector<int>& tasks) {

        std::unordered_map<int, int> m;
        for(int x : tasks){++m[x];}
        long cnt(0);
        for(std::pair<int, int> x : m){
            int val = x.second;
            if(val == 1){return -1;}
            cnt += (val + 2) / 3;
        }

        return cnt;
    }
};
