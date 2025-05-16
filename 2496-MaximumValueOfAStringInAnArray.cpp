class Solution {
public:
    int maximumValue(vector<string>& strs) {
        int mx(0);
        for(int p = 0; p < strs.size(); p++){
            std::string cur = strs[p];
            int val(0);
            for(int u = 0; u < cur.size(); u++){
                if('0' <= cur[u] && cur[u] <= '9'){val = 10 * val + (cur[u] - '0');}
                else{val = cur.size(); break;}
            }
            mx = (mx > val ? mx : val);
        }

        return mx;
    }
};
