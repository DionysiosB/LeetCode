class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        std::vector<std::string> v;
        int idx(0);
        for(int p = 1; idx < target.size() && p <= n; p++){
            if(p < target[idx]){v.push_back("Push"); v.push_back("Pop");}
            else if(p == target[idx]){v.push_back("Push"); ++idx;}
        }

        return v;
    }
};
