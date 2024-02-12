class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {

        std::string res("");
        const std::string first = strs[0];
        for(long idx = 0; idx < first.size(); idx++){
            bool same(true);
            for(long p = 1; same && p < strs.size(); p++){
                if(idx >= strs[p].size() || strs[p][idx] != first[idx]){same = false;}
            }

            if(same){res += first[idx];}
            else{break;}
        }

        return res;
    }
};
