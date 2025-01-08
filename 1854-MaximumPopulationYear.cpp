class Solution {
public:
    int maximumPopulation(vector<vector<int>>& logs) {
        std::vector<int> v(2051, 0);
        for(int p = 0; p < logs.size(); p++){++v[logs[p][0]]; --v[logs[p][1]];}
        int cur(0), mx(0), res(0);
        for(int p = 1950; p < v.size(); p++){
            cur += v[p];
            if(cur > mx){mx = cur; res = p;}
        }

        return res;
    }
};
