class MedianFinder {
public:
    MedianFinder() {
        std::multiset<int> ls();
        std::multiset<int> rs();
    }
    
    void addNum(int num) {
        if(num <= *rs.begin()){ls.insert(num);}
        else{rs.insert(num);}

        while(ls.size() + 1 < rs.size()){
            int x = *rs.begin();
            rs.erase(rs.begin());
            ls.insert(x);
        }
        while(ls.size() > rs.size()){
            int x = *ls.rbegin();
            ls.erase(ls.find(x));
            rs.insert(x);
        }


    }
    
    double findMedian() {
        if(ls.size() == rs.size()){return (*ls.rbegin() + *rs.begin()) / 2.0;}
        else{return *rs.begin();}
    }

    std::multiset<int> ls, rs;
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */
