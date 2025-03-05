class Solution {
public:
    int dietPlanPerformance(vector<int>& calories, int k, int lower, int upper) {
        int s(0), score(0);
        for(int p = 0; p < calories.size(); p++){
            s += calories[p];
            if(p >= k){s -= calories[p - k];}
            if(p >= k - 1){score += (s > upper) - (s < lower);}
        }
        
        return score;
    }
};
