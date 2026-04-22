class CombinationIterator {
public:
    CombinationIterator(string characters, int combinationLength) {

        int n = characters.size();
        for(int p = 1; p < (1 << n); p++){
            int x(p);
            std::string cur("");
            for(int u = 0; u < n; u++){
                if(x % 2){cur += characters[u];}
                x /= 2;
                if(cur.size() > combinationLength){break;}
            }
            if(cur.size() == combinationLength){v.push_back(cur);}
        }

        sort(v.begin(), v.end());
        idx = 0;
    }
    
    string next() {
        if(idx < v.size()){return v[idx++];}
        return "";
    }
    
    bool hasNext() {return idx < v.size();}

private:
    std::vector<std::string> v;
    int idx{0};
};

/**
 * Your CombinationIterator object will be instantiated and called as such:
 * CombinationIterator* obj = new CombinationIterator(characters, combinationLength);
 * string param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */
