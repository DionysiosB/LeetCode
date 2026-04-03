class Solution {
public:
    int findMaxValueOfEquation(vector<vector<int>>& points, int k) {

        std::multiset<int, std::greater<int> > ms;
        int idx(0), mxv(-2e9);
        for(int p = 0; p < points.size(); p++){
            while(idx < p && points[idx][0] + k < points[p][0]){
                int diff = points[idx][1] - points[idx][0];
                ms.erase(ms.find(diff));
                ++idx;
            }
            if(!ms.empty()){
                int tst = points[p][0] + points[p][1] + *ms.begin();
                mxv = (mxv > tst ? mxv : tst);
            }

            ms.insert(points[p][1] - points[p][0]);
        }

        return mxv;
    }
};
