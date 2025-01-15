class Solution {
public:
    int maxNumberOfApples(vector<int>& weight) {
        sort(weight.begin(), weight.end());
        int cnt(0), rem(5000);
        for(int p = 0; p < weight.size(); p++){
            if(rem < weight[p]){return cnt;}
            ++cnt; rem -= weight[p];
        }
        
        return weight.size();
    }
};
