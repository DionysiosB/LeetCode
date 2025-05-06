class Solution {
public:
    string freqAlphabets(string s) {
        std::string t("");

        int idx(s.size() - 1);
        while(idx >= 0){
            if(s[idx] == '#'){
                char x = 'a' + (10 * (s[idx - 2] - '0') + (s[idx - 1] - '0') - 1);
                t += x;
                idx -= 3;
            }
            else{
                char x = 'a' + (s[idx] - '0' - 1);
                t += x;
                --idx;
            }
        }

        std::reverse(t.begin(), t.end());
        return t;
    }
};
