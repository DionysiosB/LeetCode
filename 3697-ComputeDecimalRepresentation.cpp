class Solution {
public:
    vector<int> decimalRepresentation(int n) {

        std::vector<int> v;
        long long pt(1);
        while(n){
            int x = n % 10;
            if(x){v.push_back(x * pt);}
            pt *= 10;
            n /= 10;
        }

        std::reverse(v.begin(), v.end());
        return v;
    }
};
