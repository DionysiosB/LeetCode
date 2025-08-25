class Solution {
public:
    int partitionString(string s) {
        std::set<char> t;
        int cnt(1);
        for(int p = 0; p < s.size(); p++){
            if(t.count(s[p])){++cnt; t.clear();}
            t.insert(s[p]);
        }
        return cnt;
    }
};
