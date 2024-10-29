bool dunique(int x){
    std::vector<bool> d(10, 0);
    while(x){
        if(d[x % 10]){return false;}
        d[x % 10] = 1; x /= 10;
    }
    return true;
}


class Solution {
public:
    int numberCount(int a, int b) {
        int cnt(0);
        for(int p = a; p <= b; p++){cnt += dunique(p);}
        return cnt;
    }
};
