class RecentCounter {
public:
    RecentCounter() {dq.clear();}
    int ping(int t) {
        while(!dq.empty() && dq.front() + 3000 < t){dq.pop_front();}
        dq.push_back(t);
        return dq.size();
    }

    std::deque<int> dq;
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */
