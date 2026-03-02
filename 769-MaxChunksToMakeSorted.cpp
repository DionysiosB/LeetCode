class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {

        std::set<int> s;
        int cnt(0), mx(0), prev(-1);
        for(int p = 0; p < arr.size(); p++){
            s.insert(arr[p]);
            mx = (mx > arr[p] ? mx : arr[p]);
            if(s.size() == mx - prev){++cnt; s.clear(); prev = mx;}
        }

        return cnt;
    }
};
