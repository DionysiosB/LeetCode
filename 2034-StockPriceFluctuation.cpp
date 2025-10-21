class StockPrice {
public:
    StockPrice() {
        pxm = std::unordered_map<int, int>();
        mspx = std::multiset<int>();
        lastts = 0;
        lastpx = 0;
    }
    
    void update(int timestamp, int price){
        if(pxm.count(timestamp)){
            int prev = pxm[timestamp];
            mspx.erase(mspx.find(prev));
        }
        pxm[timestamp] = price;
        mspx.insert(price);
        if(timestamp >= lastts){lastts = timestamp; lastpx = price;}
    }
    int current(){return lastpx;}
    int maximum(){return *mspx.rbegin();}
    int minimum(){return *mspx.begin();}

    int lastts, lastpx;
    std::unordered_map<int, int> pxm;
    std::multiset<int> mspx;
};

/**
 * Your StockPrice object will be instantiated and called as such:
 * StockPrice* obj = new StockPrice();
 * obj->update(timestamp,price);
 * int param_2 = obj->current();
 * int param_3 = obj->maximum();
 * int param_4 = obj->minimum();
 */
