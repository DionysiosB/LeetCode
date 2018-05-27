class Solution {

public:
    vector<string> subdomainVisits(vector<string>& cpdomains) {
        
        std::map<std::string, long> mt;
        for(long p = 0; p < cpdomains.size(); p++){
            std::string cur = cpdomains[p];
            long cnt(0), ind(0);
            while('0' <= cur[ind] && cur[ind] <= '9'){cnt = 10 * cnt + (cur[ind] - '0'); ++ind;}
            
            while(ind < cur.size()){
                ++ind;
                mt[cur.substr(ind)] += cnt;
                while(ind < cur.size() && cur[ind] != '.'){++ind;}   
            }              
        }
        
        std::vector<std::string> res;
        for(std::map<std::string, long>::iterator it = mt.begin(); it != mt.end(); it++){
            std::string cur = std::to_string(it->second); cur += " "; cur += it->first;
            res.push_back(cur);
        }
        
        return res;
    }

};
