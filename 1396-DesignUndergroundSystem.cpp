class UndergroundSystem {
public:
    UndergroundSystem() {
        mw = std::map<int, std::pair<std::string, int> >();
        ma = std::map<std::pair<std::string, std::string>, std::pair<int, int> >();
    }
    
    void checkIn(int id, string stationName, int t) {
        mw[id] = std::make_pair(stationName, t);
    }
    
    void checkOut(int id, string stationName, int t) {
        std::string from = mw[id].first;
        int starttime = mw[id].second;
        std::pair<std::string, std::string> sp = std::make_pair(from, stationName);
        if(!ma.count(sp)){ma[sp] = std::make_pair(0, 0);}
        ma[sp].first += (t - starttime);
        ma[sp].second += 1;
    }
    
    double getAverageTime(string startStation, string endStation) {
        
        std::pair<std::string, std::string> sp = std::make_pair(startStation, endStation);
        int total = ma[sp].first;
        int cnt = ma[sp].second; 
        return 1.0 * total / cnt;
    }

private:
    std::map<int, std::pair<std::string, int> > mw;
    std::map<std::pair<std::string, std::string>, std::pair<int, int> > ma;
};

/**
 * Your UndergroundSystem object will be instantiated and called as such:
 * UndergroundSystem* obj = new UndergroundSystem();
 * obj->checkIn(id,stationName,t);
 * obj->checkOut(id,stationName,t);
 * double param_3 = obj->getAverageTime(startStation,endStation);
 */
