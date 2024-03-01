class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {

        std::map<int, int> cnt;
        for(int p = 0; p < arr.size(); p++){++cnt[arr[p]];}
        std::vector<int> cv;
        for(std::map<int, int>::iterator it = cnt.begin(); it != cnt.end(); it++){cv.push_back(it->second);}
        sort(cv.begin(), cv.end());
        int idx(0); while(k > 0 && idx < cv.size() && k >= cv[idx]){k -= cv[idx++];}
        return (cv.size() - idx);
    }
};
