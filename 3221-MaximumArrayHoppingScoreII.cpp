class Solution {
public:
    long long maxScore(vector<int>& nums) {

        const int n = nums.size();
        std::vector<std::pair<long long, long long> > v(n);
        for(int p = 0; p < nums.size(); p++){v[p] = std::make_pair(nums[p], p);}
        sort(v.rbegin(), v.rend());

        //It's always optimal to jump to the maximum value among all values to the right
        //Sketch of the proof: Assume current pos = prev, nums[a] = A, nums[b] = B with A < B
        //First A, then B (a - prev) * A + (b - a) * B; Otherwise (b - prev) * B which is larger
        //Sort the vector and the positions, keep only the local maximums to the right

        long long score(0), idx(0);
        for(int p = 0; p < v.size(); p++){
            if(v[p].second < idx){continue;}
            score += (v[p].second - idx) * v[p].first;
            idx = v[p].second;
        }

        return score;
    }
};
