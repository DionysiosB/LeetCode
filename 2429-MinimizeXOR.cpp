class Solution {
public:
    int minimizeXor(int num1, int num2) {
        
        int cnt(0);
        while(num2){cnt += (num2 % 2); num2 /= 2;}

        std::vector<int> v;
        while(num1){v.push_back(num1 % 2); num1 /= 2;}

        

        while(cnt > v.size()){v.push_back(0);}
        std::vector<int> w(v.size());
        for(int p = v.size() - 1; cnt && p >= 0; p--){if(v[p]){--cnt; w[p] = 1;}}
        for(int p = 0; cnt && p < v.size(); p++){if(!v[p]){--cnt; w[p] = 1;}}

        int res(0);
        for(int p = w.size() - 1; p >= 0; p--){res = 2 * res + w[p];}
        return res;
    }
};
