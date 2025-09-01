class Solution {
public:

    bool check(std::vector<int> &b, int r, int h){
        int s(0);
        for(int p = 0; p < b.size(); p++){
            s += (b[p] + r - 1) / r;
            if(s > h){return false;}
        }
        return true;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int left(1), right(1e9 + 7);
        int res(-1);
        while(left <= right){
            int mid = (left + right) / 2;
            if(check(piles, mid, h)){res = mid; right = mid - 1;}
            else{left = mid + 1;}
        }

        return res;
    }
};
