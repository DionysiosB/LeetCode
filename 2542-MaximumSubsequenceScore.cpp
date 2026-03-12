class Solution {
public:
    long long maxScore(vector<int>& nums1, vector<int>& nums2, int k) {

        std::vector<std::pair<int, int> > v(nums1.size());
        for(int p = 0; p < v.size(); p++){v[p] = std::make_pair(nums2[p], nums1[p]);}
        sort(v.rbegin(), v.rend());

        std::multiset<long long> ms;
        long long total(0), ans(0);
        for(int p = 0; p + 1 < k; p++){ms.insert(v[p].second); total += v[p].second;}

        for(int p = k - 1; p < v.size(); p++){
            long long tst = (total + v[p].second) * v[p].first;
            ans = (ans > tst ? ans : tst);
            if(ms.empty() || v[p].second <= *ms.begin()){continue;}
            total += v[p].second - *ms.begin();
            ms.erase(ms.begin()); ms.insert(v[p].second);
        }

        return ans;
    }
};
