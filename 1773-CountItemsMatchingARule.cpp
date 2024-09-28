class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {

        int cnt(0);
        for(int p = 0; p < items.size(); p++){
            cnt += (ruleKey == "type" && items[p][0] == ruleValue);
            cnt += (ruleKey == "color" && items[p][1] == ruleValue);
            cnt += (ruleKey == "name" && items[p][2] == ruleValue);
        }

        return cnt;
    }
};
