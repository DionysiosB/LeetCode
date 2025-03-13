class Solution {
public:
    int minPartitions(string n) {   
        int res(0);
        for(int p = 0; p < n.size(); p++){
            int d = n[p] - '0';
            res = (res > d ? res : d);
        }
        return res;
    }
};
