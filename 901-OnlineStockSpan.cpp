class StockSpanner {
public:
    StockSpanner(){s = std::stack<std::pair<int, int> >();}
    int next(int price) {
        int cnt(1);
        while(!s.empty() && s.top().first <= price){cnt += s.top().second; s.pop();}
        s.push(std::make_pair(price, cnt));
        return cnt;
    }

    std::stack<std::pair<int, int>> s;
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */
