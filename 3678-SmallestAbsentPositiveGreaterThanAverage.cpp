class Solution {
public:
    int smallestAbsent(vector<int>& nums) {
        const int n = nums.size();
        std::set<int> s;
        int total(0);
        for(int x : nums){
            total += x;
            s.insert(x);
        }

        int avg(total / n);
        for(int p = 1 + (total / n); p < 200; p++){
            if(p <= 0 || p * n <= total){continue;}
            if(s.count(p)){continue;}
            return p;
        }

        return -1;
    }
};
