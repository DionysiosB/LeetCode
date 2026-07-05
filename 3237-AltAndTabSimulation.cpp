class Solution {
public:
    vector<int> simulationResult(vector<int>& windows, vector<int>& queries) {

        std::vector<int> v;
        std::set<int> s;
        for(int p = queries.size() - 1; p >= 0; p--){
            if(s.count(queries[p])){continue;}
            s.insert(queries[p]);
            v.push_back(queries[p]);
        }

        for(int w : windows){
            if(s.count(w)){continue;}
            s.insert(w);
            v.push_back(w);
        }

        return v;
    }
};
