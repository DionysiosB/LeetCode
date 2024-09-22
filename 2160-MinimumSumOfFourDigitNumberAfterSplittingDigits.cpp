class Solution {
public:
    int minimumSum(int num) {
        std::vector<int> v;
        for(int p = 0; p < 4; p++){v.push_back(num % 10); num /= 10;}
        sort(v.begin(), v.end());
        return (10 * (v[0] + v[1]) + (v[2] + v[3]));
    }
}
