class Solution {
public:
    long long maxPoints(vector<int>& technique1, vector<int>& technique2, int k) {

        const int n = technique1.size();
        std::vector<std::pair<int, int> > w;
        long long total(0);
        for(int p = 0; p < n; p++){
            if(technique1[p] >= technique2[p]){total += technique1[p]; --k;}
            else{w.push_back(std::make_pair(technique2[p] - technique1[p], technique2[p]));}
        }

        sort(w.begin(), w.end());
        for(int p = 0; p < w.size(); p++){total += w[p].second - (p < k ? w[p].first : 0);}
        return total;
    }
};
