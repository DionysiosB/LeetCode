class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {

        std::multiset<int, std::greater<int> > s;
        for(int x : piles){s.insert(x);}

        while(k--){
            int x = *s.begin();
            s.erase(s.begin());
            s.insert( (x + 1) / 2);
        }

        int total(0);
        for(int x : s){total += x;}
        return total;
    }
};
