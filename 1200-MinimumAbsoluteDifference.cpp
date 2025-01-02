class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        std::vector<std::vector<int> > v; int mnd(arr.back() - arr[0] + 7);
        for(int p = 1; p < arr.size(); p++){
            int diff = arr[p] - arr[p - 1];
            if(diff <= mnd){
                if(diff < mnd){v.clear();}
                mnd = diff;
                std::vector<int> cp; cp.push_back(arr[p - 1]); cp.push_back(arr[p]);
                v.push_back(cp);
            }
        }

        return v;
    }
};
