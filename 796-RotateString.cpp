class Solution {
public:
    bool rotateString(string s, string goal) {
        s += s;
        return (s.size() == 2 * goal.size()) && (s.find(goal) != std::string::npos);
    }
};
