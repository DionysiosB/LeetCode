class Solution {
public:
    int sumDivisibleByK(vector<int>& nums, int k) {

        std::unordered_map<int, int> f;
        for(int x : nums){++f[x];}

        int total(0);
        for(std::pair<int, int> x : f){
            if(x.second % k){continue;}
            total += x.first * x.second;
        }

        return total;
    }
};
