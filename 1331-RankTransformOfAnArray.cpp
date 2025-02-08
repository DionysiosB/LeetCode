class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        std::vector<std::pair<int, int> > v(arr.size());
        for(int p = 0; p < arr.size(); p++){v[p].first = arr[p]; v[p].second = p;}
        sort(v.begin(), v.end());
        std::vector<int> res(arr.size());
        int rank(0), prev(-1e9 - 7);
        for(int p = 0; p < v.size(); p++){
            if(prev < v[p].first){++rank;}
            res[v[p].second] = rank;
            prev = v[p].first;
        }
        
        return res;
    }
};
