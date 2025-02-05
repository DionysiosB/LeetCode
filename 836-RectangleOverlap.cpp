class Solution {
public:
    bool isRectangleOverlap(vector<int>& rec1, vector<int>& rec2) {
        int a = std::max(rec1[0],rec1[2]);
        int b = std::max(rec2[0],rec2[2]);
        int c = std::min(rec1[0],rec1[2]);
        int d = std::min(rec2[0],rec2[2]);
        int e = std::max(rec1[1],rec1[3]);
        int f = std::max(rec2[1],rec2[3]);
        int g = std::min(rec1[1],rec1[3]);
        int h = std::min(rec2[1],rec2[3]);
        if(a<=d || b<=c){return false;}
        if(e<=h || f<=g ){return false;}
        return true;
    }
};

