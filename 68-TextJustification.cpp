class Solution {
public:
    vector<string> fullJustify(vector<string>& words, int maxWidth) {

        std::vector<std::vector<std::string> > v;
        int length(0);
        for(int p = 0; p < words.size(); p++){
            if(v.empty() || (length + words[p].size() > maxWidth) ){v.push_back(std::vector<std::string>()); length = 0;}
            length += words[p].size() + 1;
            v.back().push_back(words[p]);
        }

        std::vector<std::string> w(v.size(), "");
        for(int p = 0; p < v.size(); p++){
            int length(0); for(std::string s : v[p]){length += s.size();}
            int padlen = maxWidth - length;
            if(v[p].size() == 1){w[p] = v[p][0] + std::string(maxWidth - length, ' '); continue;}
            else if(p + 1 == v.size()){
                for(int u = 0; u < v.back().size(); u++){
                    w[p] += v.back()[u] + (u + 1 < v.back().size() ? " " : "");
                }
                w.back() += std::string(maxWidth - w.back().size(), ' ');
            }
            else{
                int bins   = v[p].size() - 1;
                int spaces = padlen / bins;
                int extra  = padlen % bins;
                for(int u = 0; u < v[p].size(); u++){w[p] += v[p][u] + std::string(u + 1 < v[p].size() ? (spaces + (u < extra)) : 0, ' ');}
            }
        }

        return w;
    }
};
