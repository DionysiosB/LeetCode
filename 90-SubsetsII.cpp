class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        const int n = nums.size();
        int L = (1 << n);
        
        std::set<std::vector<int> > s;

        for(int p = 0; p < L; p++){
            int x(p);
            std::vector<int> w;
            for(int u = 0; u < n; u++){
                if(x % 2){w.push_back(nums[u]);}
                x /= 2;
            }
            sort(w.begin(), w.end());
            s.insert(w);
        }

        std::vector<std::vector<int> > res;
        for(std::set<std::vector<int>>::iterator it = s.begin(); it != s.end(); it++){res.push_back(*it);}
        return res;
    }
};
