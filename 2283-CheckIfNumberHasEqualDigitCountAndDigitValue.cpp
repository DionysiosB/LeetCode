class Solution {
public:
    bool digitCount(string num) {
        
        std::vector<int> v(10);
        for(int p = 0; p < num.size(); p++){++v[num[p] - '0'];}
        for(int p = 0; p < num.size(); p++){
            if(v[p] != (num[p] - '0')){return false;}
        }
        return true;
    }
};
