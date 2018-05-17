class Solution {
public:
    int findComplement(int num) {
        
        std::vector<bool> d;
        while(num > 0){d.push_back(num % 2); num /= 2;}
        int comp(0);
        for(int p = d.size() - 1; p >= 0; p--){comp = 2 * comp + (1 - d[p]);}
        return comp;
    }
};
