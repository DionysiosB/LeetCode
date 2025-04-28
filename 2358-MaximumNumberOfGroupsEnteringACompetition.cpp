class Solution {
public:
    int maximumGroups(vector<int>& grades) {
        int cnt(0),total(0);
        while (total + cnt < grades.size()){total += ++cnt;}
        return cnt;

    }
};
