class Solution {
public:
    int bestClosingTime(string customers) {

        customers += 'X';
        const int n = customers.size();
        std::vector<int> v(n, 0);
        for(int p = n - 2; p >= 0; p--){v[p] = v[p + 1] + (customers[p] == 'Y');}
        int cntno(0), mnp(1e9 + 7), ans(-1);
        for(int p = 0; p < n; p++){
            int cur = cntno + v[p];
            if(cur < mnp){mnp = cur; ans = p;}
            cntno += (customers[p] == 'N'); 
        }

        return ans;
    }
};
