class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        std::string ans(s);
        for(int p = 0; p < indices.size(); p++){ans[indices[p]] = s[p];}
        return ans;
    }
}
