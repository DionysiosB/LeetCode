class Solution {
public:
    bool find132pattern(std::vector<int>& a) {
        
        if(nums.size() < 3){return false;}
        for(int p = 2; p < nums.size(); p++){
            if(a[p - 2] > a[p - 1] && a[p - 1] < a[p]){return true;}
        }
        
        return false;
    }
};
