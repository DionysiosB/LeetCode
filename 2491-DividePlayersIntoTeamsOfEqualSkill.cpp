class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        sort(skill.begin(), skill.end());
        long long total(0);
        int cmp(skill[0] + skill.back());
        for(int p = 0; 2 * p < skill.size(); p++){
            if(skill[p] + skill[skill.size() - 1 - p] != cmp){return -1;}
            total += skill[p] * skill[skill.size() - 1 - p];
        }

        return total;
    }
};
