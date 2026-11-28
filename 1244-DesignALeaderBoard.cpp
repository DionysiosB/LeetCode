class Leaderboard {
public:
    Leaderboard() {
        m = std::map<int, int>();
    }
    
    void addScore(int playerId, int score){m[playerId] += score;}
    int top(int K){
        std::multiset<int> s;
        for(std::pair<int, int> x : m){
            s.insert(x.second);
            if(s.size() > K){s.erase(s.begin());}
        }
        
        int total(0);
        for(int x : s){total += x;}
        return total;
    }
    
    void reset(int playerId){m[playerId] = 0;}

    std::map<int, int> m;
};

/**
 * Your Leaderboard object will be instantiated and called as such:
 * Leaderboard* obj = new Leaderboard();
 * obj->addScore(playerId,score);
 * int param_2 = obj->top(K);
 * obj->reset(playerId);
 */
