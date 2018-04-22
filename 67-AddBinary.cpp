class Solution {
public:
    string addBinary(string a, string b) {

        int n = a.size();
        int m = b.size();
        int carry(0);
        std::string sum("");
        while(n >= 0 || m >= 0){
            int current(0);
            if(n >= 0){current += (a[n] - '0'); --n;}
            if(m >= 0){current += (b[m] - '0'); --m;}

            if(current + carry == 0){sum = '0' + sum;}
            else if(current + carry == 1){sum = '1' + sum; carry = 0;}
            else if(current + carry == 2){sum = '0' + sum; carry = 1;}
            else if(current + carry == 3){sum = '1' + sum; carry = 1;}
        }

        if(carry > 0){sum = '1' + sum;}
        return sum;
    }
};
