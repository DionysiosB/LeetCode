class Solution {
public:
    
    int gcd(int a, int b){return b ? gcd(b, a % b) : a;}
    
    bool checkStraightLine(vector<vector<int>>& coordinates) {    
        int num(coordinates[1][1] - coordinates[0][1]), den(coordinates[1][0] - coordinates[0][0]);
        int g = gcd(num, den);
        num /= g; den /= g;
        
        for(int p = 2; p < coordinates.size(); p++){
            int dy(coordinates[p][1] - coordinates[p - 1][1]);
            int dx(coordinates[p][0] - coordinates[p - 1][0]);
            int dg = gcd(dy, dx); dy /= dg; dx /= dg;
            if(dy != num || dx != den){return false;}
        }
        
        return true;
    }
};
