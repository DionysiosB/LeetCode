class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        int carry(k);
        for(int p = num.size() - 1; p >= 0; p--){
            num[p] += carry;
            if(num[p] > 9){
                carry = num[p] / 10;
                num[p] %= 10;
            }
            else{carry = 0; break;}
        }

        while(carry){
            num.insert(num.begin(), carry % 10);
            carry /= 10;
        }

        return num;
    }
};
