class Solution {
public:
    int splitNum(int num) {
        std::vector<int> v;
        while(num){v.push_back(num % 10); num /= 10;}
        sort(v.begin(), v.end());
        int a(0), b(0);
        for(int p = 0; p < v.size(); p++){
            if(p % 2){a = 10 * a + v[p];}
            else{b = 10 * b + v[p];}
        }

        return a + b;
    }
};
