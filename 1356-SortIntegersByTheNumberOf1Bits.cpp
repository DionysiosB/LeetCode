bool cmp(int a, int b){
    int x(a), y(b), cnt(0);
    while(x){cnt -= x % 2; x /= 2;}
    while(y){cnt += y % 2; y /= 2;}
    if(cnt > 0){return true;}
    else if(cnt < 0){return false;}
    else{return a < b;}
}


class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
       sort(arr.begin(), arr.end(), cmp);
       return arr;
    }
};
