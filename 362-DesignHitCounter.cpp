class HitCounter {
public:
    HitCounter() {ms = std::multiset<int>();}
    void hit(int timestamp){
        while(!ms.empty() && (*ms.begin() + 300 <= timestamp)){ms.erase(ms.begin());}
        ms.insert(timestamp);
    }
    int getHits(int timestamp){
        while(!ms.empty() && (*ms.begin() + 300 <= timestamp)){ms.erase(ms.begin());}
        return ms.size();
    }
    
    std::multiset<int> ms;
};

/**
 * Your HitCounter object will be instantiated and called as such:
 * HitCounter* obj = new HitCounter();
 * obj->hit(timestamp);
 * int param_2 = obj->getHits(timestamp);
 */
