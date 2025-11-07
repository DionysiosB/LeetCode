class Solution {
public:
    vector<string> letterCombinations(string digits) {

        std::map<int, std::vector<char> >m;
        m[2].push_back('a'); m[2].push_back('b'); m[2].push_back('c');
        m[3].push_back('d'); m[3].push_back('e'); m[3].push_back('f');
        m[4].push_back('g'); m[4].push_back('h'); m[4].push_back('i');
        m[5].push_back('j'); m[5].push_back('k'); m[5].push_back('l');
        m[6].push_back('m'); m[6].push_back('n'); m[6].push_back('o');
        m[7].push_back('p'); m[7].push_back('q'); m[7].push_back('r');m[7].push_back('s');
        m[8].push_back('t'); m[8].push_back('u'); m[8].push_back('v');
        m[9].push_back('w'); m[9].push_back('x'); m[9].push_back('y');m[9].push_back('z');

        std::vector<std::string> v;
        if(digits.empty()){return v;}
        v.push_back("");
        for(int p = 0; p < digits.size(); p++){
            std::vector<std::string> w;
            int d = digits[p] - '0';
            for(int a = 0; a < m[d].size(); a++){
                for(int u = 0; u < v.size(); u++){
                    std::string cur = v[u] + m[d][a];
                    w.push_back(cur);
                }
            }
            v = w;
        }

        return v;
    }
};
