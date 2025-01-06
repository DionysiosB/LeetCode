bool cmp(const std::string &x, const std::string &y, const std::vector<int> &vs){
    if(x == y){return true;}
    for(int p = 0; p < x.size(); p++){
        if(p >= y.size()){return false;}
        if(vs[x[p] - 'a'] < vs[y[p] - 'a']){return true;}
        if(vs[x[p] - 'a'] > vs[y[p] - 'a']){return false;}

    }

    return true;
}


class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {

       std::vector<int> v(26);
       for(int p = 0; p < 26; p++){v[order[p] - 'a'] = p;} 

       for(int p = 1; p < words.size(); p++){
           if(!cmp(words[p - 1], words[p], v)){return false;}
       }

       return true;
    }
};
