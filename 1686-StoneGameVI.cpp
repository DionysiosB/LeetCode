class Solution {
public:
    int stoneGameVI(vector<int>& aliceValues, vector<int>& bobValues) {

        std::vector<std::pair<int, std::pair<int, int> > > v(aliceValues.size());
        for(int p = 0; p < v.size(); p++){
            v[p].first = aliceValues[p] + bobValues[p];
            v[p].second.first = aliceValues[p];
            v[p].second.second = bobValues[p];
        }

        sort(v.rbegin(), v.rend());
        int total(0);
        for(long p = 0; p < v.size(); p++){
            if(p % 2){total -= v[p].second.second;}
            else{total += v[p].second.first;}
        }

        return (total > 0) - (total < 0);
    }
};
