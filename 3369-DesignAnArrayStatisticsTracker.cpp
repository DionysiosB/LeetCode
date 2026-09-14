class StatisticsTracker {

public:

    static bool paircompare(std::pair<int, int> a, std::pair<int, int> b){
        if(a.first > b.first){return true;}
        else if(a.first < b.first){return false;}
        else return a.second < b.second;
    }

    void rebalanceMedian(){

        while(ls.size() + 1 < rs.size()){
            int x = *rs.begin();
            ls.insert(x);
            rs.erase(rs.begin());
        }

        while(ls.size() > rs.size()){
            int x = *ls.rbegin();
            rs.insert(x);
            ls.erase(std::prev(ls.end()));
        }

    }


    StatisticsTracker() {
        dq = std::deque<int>();
        //fs = std::set<std::pair<int, int>, decltype(&StatisticsTracker::paircompare)>();
        fs = std::set<std::pair<int, int>, std::greater<std::pair<int, int> > >();
        fm = std::unordered_map<int, int>();
        ls = std::multiset<int>();
        rs = std::multiset<int>();
        cs = 0;
    }
    
    void addNumber(int number) {
        cs += number;
        dq.push_back(number);

        if(rs.empty() || number >= *rs.begin()){rs.insert(number);}
        else{ls.insert(number);}
        rebalanceMedian();

        if(fm.count(number)){fs.erase({fm[number], -number});}
        ++fm[number];
        fs.insert(std::make_pair(fm[number], -number));
    }
    
    void removeFirstAddedNumber() {
        int number = dq.front();
        dq.pop_front();
        cs -= number;

        if(rs.count(number)){rs.erase(rs.find(number));}
        else{ls.erase(ls.find(number));}
        rebalanceMedian();

        if(fm.count(number)){fs.erase(std::make_pair(fm[number], -number));} //AVOID CUSTOM FUNCTION - use std::greater and negating the actual number
        --fm[number];
        fs.insert(std::make_pair(fm[number], -number));
        
    }
    
    int getMean() {return cs / dq.size();}
    int getMedian() {return *rs.begin();}
    int getMode() {return (-1) * fs.begin()->second;}


private:
    std::deque<int> dq;
    //std::set<std::pair<int, int>, decltype(&StatisticsTracker::paircompare)> fs;  //AVOID CUSTOM FUNCTION
    std::set<std::pair<int, int>, std::greater<std::pair<int, int>  >  > fs;
    std::unordered_map<int, int> fm;
    std::multiset<int> ls;
    std::multiset<int> rs;
    long long cs;
};

/**
 * Your StatisticsTracker object will be instantiated and called as such:
 * StatisticsTracker* obj = new StatisticsTracker();
 * obj->addNumber(number);
 * obj->removeFirstAddedNumber();
 * int param_3 = obj->getMean();
 * int param_4 = obj->getMedian();
 * int param_5 = obj->getMode();
 */
