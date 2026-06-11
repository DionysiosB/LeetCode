class Solution {
public:
    string winningPlayer(int x, int y) {
        return (std::min(x, y / 4) % 2 ? "Alice" : "Bob");
    }
};
