class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int mx(0);
        for(int p = 0; p < candies.size(); p++){mx = (mx > candies[p] ? mx : candies[p]);}
        std::vector<bool> res(candies.size(), false);
        for(int p = 0; p < candies.size(); p++){res[p] = (candies[p] + extraCandies >= mx);}
        return res;
    }
};
