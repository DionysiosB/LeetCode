class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        std::map<long, long> m;
        for(long p = 0; p < nums.size(); p++){++m[nums[p]];}

        std::vector<std::vector<int> > v;
        for(std::map<long, long>::iterator a = m.begin(); a != m.end(); a++){
            long xk = a->first;
            long xc = a->second;
            if(xc >= 3 && xk == 0){v.push_back(std::vector<int>(3, (int)xk)); continue;}
            for(std::map<long, long>::iterator b = std::next(a); b != m.end(); b++){
                long yk = b->first;
                long yc = b->second;
                if(xc >= 2 && yk + 2 * xk == 0){v.push_back(std::vector<int>({(int)xk, (int)xk, (int)yk})); continue;}
                if(yc >= 2 && xk + 2 * yk == 0){v.push_back(std::vector<int>({(int)xk, (int)yk, (int)yk})); continue;}

                long rem = -xk - yk;
                if(rem <= yk){continue;}
                else if(m.count(rem)){v.push_back(std::vector<int>({(int)xk, (int)yk, (int)rem}));}
            }
        }

        return v;
    }

};
