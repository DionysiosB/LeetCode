class Solution {
public:
    long long minCost(vector<int>& basket1, vector<int>& basket2) {

        std::map<long long, long long> m;
        for(long long x : basket1){++m[x];}
        for(long long x : basket2){--m[x];}

        long long total(0);
        for(std::pair<long long, long long> x : m){
            if(x.second % 2){return -1;}
            m[x.first] = std::abs(m[x.first]) / 2;
            total += std::abs(x.second);
        }

        if(!total){return 0;}
        long long mnf = m.begin()->first;

        long long cost(0), rem(total / 4);
        for(std::pair<long long, long long> x : m){
            long long cnt = (x.second < rem ? x.second : rem);
            cost += std::min(x.first, 2 * mnf) * cnt;
            rem -= cnt;
            if(rem <= 0){break;}
        }

        return cost;
    }
};
