class Solution {
public:
    int largestRectangleArea(vector<int>& h) {
        long res(0);
        std::stack<long> s;
        h.push_back(0);
        for(long p = 0; p < h.size(); p++){
            while(!s.empty() && h[p] < h[s.top()]){
                long pos  = s.top(); s.pop();
                long prev = (s.empty() ? -1 : s.top());
                long range = p - prev - 1;
                long cur = range * h[pos];
                res = (res > cur ? res : cur);
            }
            s.push(p);
        }

        return res;
    }
};
