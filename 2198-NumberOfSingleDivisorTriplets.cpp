class Solution {
public:
    long long singleDivisorTriplet(vector<int>& nums) {

        long long res(0), freq[101] = {0};
        for(int num : nums){++freq[num];};

        for(int p = 1; p <= 100; p++){
            if(!freq[p]){continue;}
            for(int q = p; q <= 100; q++){
                if(!freq[q]){continue;}
                for(int r = q + (p == q); r <= 100; r++){
                    if(!freq[r]){continue;}
                    int sum = p + q + r;
                    int divisor = (sum % p == 0) + (sum % q == 0) + (sum % r == 0);
                    if(divisor != 1){continue;}
                    if(p == q){res += (freq[p] * (freq[p] - 1) / 2 * freq[r]);}
                    else if(q == r){res += (freq[q] * (freq[q] - 1) / 2 * freq[p]);}
                    else{res += freq[p] * freq[q] * freq[r];}
                }
            }
        }
        return res * 6;
    }
};
