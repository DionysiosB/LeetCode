class Solution {
public:
    int minSetSize(vector<int>& arr) {

        std::map<int, int> m;
        for(int p = 0; p < arr.size(); p++){++m[arr[p]];}
        std::vector<int> f;
        for(std::map<int, int>::iterator it = m.begin(); it != m.end(); it++){f.push_back(it->second);}
        sort(f.rbegin(), f.rend());
        long rem(0), cnt(0);
        for(long p = 0; p < f.size(); p++){
            rem += f[p];
            ++cnt;
            if(rem >= arr.size() / 2){break;}
        }

        return cnt;
    }
};
