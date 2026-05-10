class Solution {
public:
    bool checkTwoChessboards(string coordinate1, string coordinate2) {
        int rowdiff = std::abs(coordinate1[0] - coordinate2[0]);
        int coldiff = std::abs(coordinate1[1] - coordinate2[1]);
        return (1 + rowdiff + coldiff) % 2;
    }
};
