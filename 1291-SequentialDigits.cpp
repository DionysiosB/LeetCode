class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        std::vector<int> v;
        for(int start = 1; start <= 9; start++){
            int d(start), cur(start);
            while(cur <= high){
                if(low <= cur && cur <= high){v.push_back(cur);}
                ++d; if(d > 9){break;}
                cur = 10 * cur + d;
           }
        }

        sort(v.begin(), v.end());
        return v;
    }
};
