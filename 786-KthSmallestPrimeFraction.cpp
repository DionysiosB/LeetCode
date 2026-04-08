class Solution {
public:

    static bool comp(std::pair<int, int> a, std::pair<int, int> b){
        return a.first * b.second < a.second * b.first;
    }
    vector<int> kthSmallestPrimeFraction(vector<int>& arr, int k) {

        std::vector<std::pair<int, int> > v;
        for(int p = 0; p < arr.size(); p++){
            for(int q = p + 1; q < arr.size(); q++){
                v.push_back(std::make_pair(arr[p], arr[q]));
            }
        }

        sort(v.begin(), v.end(), Solution::comp);
        std::vector<int> ans(2); ans[0] = v[k - 1].first; ans[1] = v[k - 1].second;
        return ans;
    }
};
