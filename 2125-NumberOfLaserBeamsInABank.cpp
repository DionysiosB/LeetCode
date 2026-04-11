class Solution {
public:
    int numberOfBeams(vector<string>& bank) {

        std::vector<int> v;
        for(int p = 0; p < bank.size(); p++){
            int cnt(0);
            for(int q = 0; q < bank[p].size(); q++){cnt += (bank[p][q] - '0');}
            if(cnt > 0){v.push_back(cnt);}
        }
        
        int total(0);
        for(int p = 1; p < v.size(); p++){total += v[p - 1] * v[p];}
        return total;


    }
};
