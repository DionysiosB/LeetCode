class Solution {
public:
    int minMaxGame(vector<int>& nums) {
        
        std::vector<int> w(nums);
        while(w.size() > 1){
            std::vector<int> y;
            for(int p = 0; p < w.size(); p += 2){
                if(p % 4){y.push_back(w[p] > w[p + 1] ? w[p] : w[p + 1]);}
                else{y.push_back(w[p] < w[p + 1] ? w[p] : w[p + 1]);}
            }
            w = y;
        }
        
        return w[0];
    }
};
