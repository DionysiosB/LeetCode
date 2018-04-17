class Solution {
public:
    std::vector<int> getRow(int rowIndex) {
        std::vector<int> v(1, 1);
        if(rowIndex == 0){return v;}
        for(int p = 1; p <= rowIndex; p++){
            std::vector<int> a; a.push_back(1);
            for(int q = 1; q < v.size(); q++){a.push_back(v[q] + v[q - 1]);}
            a.push_back(1);
            v = a;
        }

        return v;
    }
};
