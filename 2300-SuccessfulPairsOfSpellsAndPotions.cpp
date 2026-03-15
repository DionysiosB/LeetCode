class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {

        sort(potions.begin(), potions.end());
        std::vector<int> v(spells.size());
        for(int p = 0; p < spells.size(); p++){
            long long mns = (success + spells[p] - 1) / spells[p];
            v[p] = potions.end() - std::lower_bound(potions.begin(), potions.end(), mns);
        }

        return v;
        
    }
};
