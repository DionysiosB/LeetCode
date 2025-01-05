class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int last(-2), cnt(0);
        for(int p = 0; p < flowerbed.size(); p++){
            if(!flowerbed[p]){continue;}
            int diff = (p - last) / 2 - 1;
            if(diff > 0){cnt += diff;}
            last = p;
        }

        cnt += (flowerbed.size() + 1 - last) / 2 - 1;
        return cnt >= n;
    }
};
