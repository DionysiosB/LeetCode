class Solution {
public:
    string oddString(vector<string>& words) {
        
        int nw(words.size()), n(words[0].size());
        std::vector<std::vector<int> > m(nw, std::vector<int>(n, 0));
        for(int w = 0; w < nw; w++){
            std::string word = words[w];
            for(int p = 1; p < word.size(); p++){
                m[w][p] = word[p] - word[p - 1];
            }
        }

        for(int col = 1; col < n; col++){
            for(int w = 0; w < nw; w++){
                if(m[w][col] != m[(w + 1) % nw][col] && m[w][col] != m[(w - 1 + nw) % nw][col]){return words[w];}
            }
        }

        return "";
    }
};
