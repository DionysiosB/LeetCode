class Solution {
public:
    bool isReachableAtTime(int sx, int sy, int fx, int fy, int t) {
        int dist = std::max(std::abs(fx - sx), std::abs(fy - sy));
        if(dist == 0 && t == 1){return false;}
        return dist <= t;
    }
}
