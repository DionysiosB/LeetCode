class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {

        int cnt(fruits.size());
        for(int nf : fruits){
            for(int& cap : baskets){
                if(cap < nf){continue;}
                --cnt; cap = 0; break;
            }
        }

        return cnt;
    }
};
