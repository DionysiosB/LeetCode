class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        std::vector<std::pair<int, std::string> > v(names.size());
        for(int p = 0; p < names.size(); p++){
            v[p].first = heights[p]; v[p].second = names[p];
        }
        sort(v.rbegin(), v.rend());
        std::vector<std::string> w(v.size());
        for(int p = 0; p < v.size(); p++){w[p] = v[p].second;}
        return w;
    }
};
