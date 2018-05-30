class Solution {
public:
    std::vector<int> shortestToChar(std::string s, char c) {
        
        std::vector<int> dist(s.size(), 10001);
        long cur(-10000);
        for(int p = 0; p < s.size(); p++){
            if(s[p] == c){cur = p;}
            dist[p] = p - cur;
        }
        
        cur = s.size() + 10000;
        for(int p = s.size() - 1; p >= 0; p--){
            if(s[p] == c){cur = p;}
            int cand = cur - p;
            dist[p] = (dist[p] < cand) ? dist[p] : cand;
        }
        
        return dist;
    }
};
