class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& t) {
        
        int n = t.size();
        std::vector<int> res(n);
        std::vector<int> v;
        
        for(int p = 0; p < n; p++){
            while(!v.empty() && t[v.back()] < t[p]){
                res[v.back()] = p - v.back();
                v.pop_back();
            }
            v.push_back(p);
        }
        
        return res;
    }
};
