class Solution {
public:
    vector<int> numMovesStones(int a, int b, int c) {

        std::vector<int> v(3);
        v[0] = a; v[1] = b; v[2] = c;
        sort(v.begin(), v.end());
        std::vector<int> w(2);

        int da(v[1] - v[0] - 1), db(v[2] - v[1] - 1);
        if(da == 0 && db == 0){w[0] = 0;}
        else if(da <= 1 || db <= 1){w[0] = 1;}
        else{w[0] = 2;}

        w[1] = v[2] - v[0] - 2;
        return w;
    }
};
