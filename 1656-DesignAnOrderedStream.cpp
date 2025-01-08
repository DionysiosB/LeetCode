class OrderedStream {
public:
    OrderedStream(int n) {
        w = std::vector<std::string>(n + 1, "");
        idx = 1;
    }
    
    vector<string> insert(int idKey, string value) {
        w[idKey] = value;
        std::vector<std::string> res;
        while(idx < w.size() && w[idx] != ""){res.push_back(w[idx++]);}
        return res;
    }

    std::vector<std::string> w;
    int idx{0};
};

/**
 * Your OrderedStream object will be instantiated and called as such:
 * OrderedStream* obj = new OrderedStream(n);
 * vector<string> param_1 = obj->insert(idKey,value);
 */
