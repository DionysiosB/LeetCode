class Solution {

public:
    int maxDistance(vector<int>& position, int m) {

        sort(position.begin(), position.end());
        int left(1), right(position.back()), ans(-1);
        while(left <= right){
            int mid = (left + right) / 2;
            if(check(position, m, mid)){ans = mid; left = mid + 1;}
            else{right = mid - 1;}
        }

        return ans;
    }

private:
    bool check(const std::vector<int> &pos, int num, int dist){
        int prev(pos[0]), cnt(1);
        for(int p = 1; p < pos.size(); p++){
            if(prev + dist <= pos[p]){++cnt; prev = pos[p];}
            if(cnt >= num){return true;}
        }
        return false;
    }

};
