class Solution {
public:
    int minimumOperationsToMakeEqual(int x, int y) {
        if(y >= x){return y - x;}

        std::vector<int> v(x + 15, 0);
        for(int p = x + 1; p < v.size(); p++){v[p] = 1 + v[p - 1];}
        int res(x - y);
        for(int p = v.size() - 1; p > 0; p--){
            int a = 1 + (11 * p < v.size() ? v[11 * p] : 1e5);
            int b = 1 + (5 * p < v.size() ? v[5 * p] : 1e5);
            int cur = std::abs(x - p);
            cur = (cur < a ? cur : a);
            cur = (cur < b ? cur : b);
            v[p] = cur;
            //std::cout << "x:" << x << " p:" << p << " Cur:" << cur << std::endl;
            cur += std::abs(y - p);
            res = (res < cur ? res : cur);
        }

        return res;
    }
};
