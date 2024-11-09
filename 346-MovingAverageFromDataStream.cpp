class MovingAverage {
public:
    MovingAverage(int size) {n = size; sx = 0;}
    double next(int val) {
        dq.push_front(val); sx += val;
        if(dq.size() > n){sx -= dq.back(); dq.pop_back();}
        return 1.0 * sx / dq.size();
    }

    std::deque<int> dq;
    int sx, n;
};

/**
 * Your MovingAverage object will be instantiated and called as such:
 * MovingAverage* obj = new MovingAverage(size);
 * double param_1 = obj->next(val);
 */
