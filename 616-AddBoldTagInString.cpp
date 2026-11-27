class Solution {
public:
    string addBoldTag(string s, vector<string>& words) {

        const int n = s.size();
        std::vector<int> v(n + 1, 0);
        for(std::string word : words){
            int idx(0);
            while(idx != std::string::npos){
                idx = s.find(word, idx);
                if(idx != std::string::npos){++v[idx]; --v[idx + word.size()]; ++idx;}
                else{break;}
            }
        }

        for(int p = 1; p <= n; p++){v[p] += v[p - 1];}

        std::string g;
        for(int p = 0; p < n; p++){
            if(v[p] && (!p || !v[p - 1])){g += "<b>";}
            g += s[p];
            if(v[p] && !v[p + 1]){g += "</b>";}
        }

        return g;
    }
};
