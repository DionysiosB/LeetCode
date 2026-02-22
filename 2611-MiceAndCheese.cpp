class Solution {
public:
    int miceAndCheese(vector<int>& reward1, vector<int>& reward2, int k) {

        std::vector<std::pair<int, std::pair<int, int> > > v(reward1.size());
        for(int p = 0; p < v.size(); p++){
            v[p].first = reward1[p] - reward2[p];
            v[p].second.first = reward1[p];
            v[p].second.second = reward2[p];
        }

        sort(v.rbegin(), v.rend());

        int total(0);
        for(int p = 0; p < v.size(); p++){total += (p < k ? v[p].second.first : v[p].second.second);}
        return total;
    }
};
