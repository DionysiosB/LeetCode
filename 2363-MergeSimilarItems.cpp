class Solution {
public:
    vector<vector<int>> mergeSimilarItems(vector<vector<int>>& items1, vector<vector<int>>& items2) {
        std::map<int, int> m;
        for(int p = 0; p < items1.size(); p++){m[items1[p][0]] += items1[p][1];}
        for(int p = 0; p < items2.size(); p++){m[items2[p][0]] += items2[p][1];}
        std::vector<std::vector<int> > ret;
        for(std::map<int, int>::iterator it = m.begin(); it != m.end(); it++){
            int key = it->first;
            int val = it->second;
            std::vector<int> v; v.push_back(key); v.push_back(val);
            ret.push_back(v);
        }

        return ret;
    }
};
