class Solution {
public:
    int diagonalPrime(vector<vector<int>>& nums) {
        int n(nums.size()), ub(0);
        std::set<int, std::greater<int> > s;
        for(int p = 0; p < nums.size(); p++){
            s.insert(nums[p][p]); 
            s.insert(nums[p][n - 1 - p]);
            ub = (ub > nums[p][p] ? ub : nums[p][p]);
            ub = (ub > nums[p][n - 1 - p] ? ub : nums[p][n - 1 - p]);
        }

        ub += 7;
        std::vector<bool> v(ub, 1);
        v[0]=v[1] = 0;
        for(int p = 2; p < ub; p++){
            if(!v[p]){continue;}
            for(int q = 2 * p; q < ub; q += p){v[q] = 0;}
        }

        for(std::set<int>::iterator it = s.begin(); it != s.end(); it++){
            if(v[*it]){return *it;}
        }

        return 0;
        
    }
};
