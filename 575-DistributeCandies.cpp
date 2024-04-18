class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        const int n = candyType.size();
        std::set<int> s;
        for(int p = 0; p < candyType.size(); p++){
            s.insert(candyType[p]);
        }

        int ans = (s.size() < (n / 2) ? s.size() : (n / 2));
        return ans;
    }
};
