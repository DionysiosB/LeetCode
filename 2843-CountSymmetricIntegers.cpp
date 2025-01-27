class Solution {
public:
    Solution(){
        v = std::vector<int>();
        for(int p = 11; p <= 99; p += 11){v.push_back(p);}
        for(int p = 1000; p <= 9999; p++){
            if(p / 1000 + (p /100) % 10 == (p / 10) % 10 + p % 10){v.push_back(p);}
        }
    }
    int countSymmetricIntegers(int low, int high) {
        int cnt(0);
        for(int p = 0; p < v.size(); p++){cnt += (low <= v[p] && v[p] <= high);}
        return cnt;
    }
    
    std::vector<int> v;
};
