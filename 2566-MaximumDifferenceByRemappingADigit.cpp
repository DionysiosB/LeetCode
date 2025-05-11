class Solution {
public:
    int minMaxDifference(int num) {

        std::vector<int> v;
        while(num){v.push_back(num % 10); num /= 10;}
        std::reverse(v.begin(), v.end());

        int m(-1), mx(0);
        for(int p = 0; p < v.size(); p++){
            int d = v[p];
            if(m < 0 && v[p] < 9){m = v[p]; d = 9;}
            else if(m == v[p]){d = 9;}
            mx = 10 * mx + d;
        }

        m = -1; int mn(0);
        for(int p = 0; p < v.size(); p++){
            int d = v[p];
            if(m < 0 && v[p] > 0){m = v[p]; d = 0;}
            else if(m == v[p]){d = 0;}
            mn = 10 * mn + d;
        }

        return mx - mn;
    }
};
