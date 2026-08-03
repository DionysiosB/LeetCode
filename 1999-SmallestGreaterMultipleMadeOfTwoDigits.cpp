class Solution {
public:
    int findInteger(int k, int digit1, int digit2) {
        const int64_t lim = 2147483647;
        std::queue<int64_t> q; q.push(0);
        int res(-1);

        while(!q.empty()){
            int64_t x = q.front(); q.pop();

            int64_t ya = 10 * x + digit1;
            if(0 < ya && ya <= lim){
                if(ya > k && ya % k == 0){
                    if(res < 0){res = ya;}
                    res = (res < ya ? res : ya);
                }
                q.push(ya);
            }
            
            int64_t yb = 10 * x + digit2;
            if(0 < yb && yb <= lim){
                if(yb > k && yb % k == 0){
                    if(res < 0){res = yb;}
                    res = (res < yb ? res : yb);
                }
                q.push(yb);
            }
        }

        return res;
    }
};
