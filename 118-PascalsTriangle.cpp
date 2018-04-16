class Solution {
public:
    std::vector<std::vector<int> > generate(int numRows) {

        std::vector<std::vector<int> > t;
        std::vector<int> a(1, 1);
        if(numRows >= 1){t.push_back(a);}
        for(int p = 2; p <= numRows; p++){
            std::vector<int> prev = t.back();
            std::vector<int> v; v.push_back(1);
            for(int q = 1; q < prev.size(); q++){v.push_back(prev[q] + prev[q - 1]);}
            v.push_back(1);

            t.push_back(v);
        }

        return t;
    }
};
