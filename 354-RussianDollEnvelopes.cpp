class Solution {
public:
    static bool cmp(std::vector<int> a, std::vector<int> b){
        if(a[0] == b[0]){return a[1] > b[1];} //Notice the opposite direction! Ensures decreasing h with same w
        return a[0] < b[0];
    }

    int maxEnvelopes(vector<vector<int>>& a) {
        sort(a.begin(), a.end(), &cmp);

        std::vector<int> d;
        for(long p = 0; p < a.size(); p++){
            std::vector<int>::iterator it = lower_bound(d.begin(), d.end(), a[p][1]);
            if(it == d.end()){d.push_back(a[p][1]);}
            else{*it = a[p][1];}
        }
        return d.size();
    }
};
