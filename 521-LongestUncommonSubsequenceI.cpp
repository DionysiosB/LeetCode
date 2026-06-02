class Solution {
public:
    int findLUSlength(string a, string b) {
        return (a == b) ? -1 : (a.size() > b.size() ? a.size() : b.size());
    }
};
