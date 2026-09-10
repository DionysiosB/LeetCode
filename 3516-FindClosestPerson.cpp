class Solution {
public:
    int findClosest(int x, int y, int z) {

        int dx = std::abs(z - x);
        int dy = std::abs(z - y);
        if(dx == dy){return 0;}
        else{return (dx < dy ? 1 : 2);}        
    }
};
