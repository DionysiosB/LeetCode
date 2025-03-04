class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        std::vector<int> cv(26, 0); 
        int cnt(0), mx(0);
        for(int p = 0; p < tasks.size(); p++){++cv[tasks[p] - 'A'];}
        for(int p = 0; p < cv.size(); p++){
            if(cv[p] > mx){mx = cv[p]; cnt = 1;}
            else if(cv[p] == mx){++cnt;}
        }
        int res = mx + (mx - 1) * n + (cnt - 1);
        res = (res > tasks.size() ? res : tasks.size());
        return res;
    }
};
