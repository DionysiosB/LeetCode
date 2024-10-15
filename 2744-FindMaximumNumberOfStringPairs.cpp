class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& words) {
        std::set<std::string> s;
        int cnt(0);
        for(int p = 0; p < words.size(); p++){s.insert(words[p]);}
        for(int p = 0; p < words.size(); p++){
            std::string cur = words[p];
            std::reverse(cur.begin(), cur.end());
            cnt += s.count(cur) && (cur != words[p]);
        }

        return cnt / 2;
    }
}
