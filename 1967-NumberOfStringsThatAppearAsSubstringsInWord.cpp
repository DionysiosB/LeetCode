class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {
        int cnt(0);
        for(int p = 0; p < patterns.size(); p++){cnt += (word.find(patterns[p]) != std::string::npos);}
        return cnt;
    }
};
