class Solution {
public:
    string sortString(string s) {

        std::vector<int> v(26, 0);
        for(int p = 0; p < s.size(); p++){++v[s[p] - 'a'];}

        std::string res("");
        while(res.size() < s.size()){
            for(int p = 0; p < v.size(); p++){
                if(!v[p]){continue;}
                res += (char)('a' + p);
                --v[p];
            }
            for(int p = v.size() - 1; p >= 0; p--){
                if(!v[p]){continue;}
                res += (char)('a' + p);
                --v[p];
            }
        }
        
        return res;
    }
};
