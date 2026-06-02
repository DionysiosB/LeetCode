class Solution {
public:
    vector<int> findXSum(vector<int>& nums, int k, int x) {
        std::vector<int> f(51, 0);
        for(int p = 0; p < k; p++){++f[nums[p]];}

        std::vector<int> res;
        res.push_back(getxsum(f, x));
        for(int p = k; p < nums.size(); p++){
            --f[nums[p - k]]; ++f[nums[p]];
            res.push_back(getxsum(f, x));
        }
        return res;
    }

private:
    int getxsum(std::vector<int> &f, int x){
        std::vector<std::pair<int, int> > g;
        for(int p = 0; p < f.size(); p++){
            if(!f[p]){continue;}
            g.push_back(std::make_pair(f[p], p));
        }
        sort(g.rbegin(), g.rend());
        
        int total(0);
        for(int p = 0; p < g.size() && p < x; p++){total += g[p].first * g[p].second;}
        return total;
    }

};
