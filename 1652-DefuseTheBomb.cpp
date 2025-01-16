class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        int n = code.size();
        std::vector<int> v(n);
        if(!k){return v;}
        
        int left(1), right((k + 1) % n), s(0);
        if(k < 0){left = n + k; right = 0;}
        int idx(left); while(idx != right){s += code[idx]; idx = (idx + 1) % n;}
        for(int p = 0; p < n; p++){
            v[p] = s;
            s -= code[left]; s += code[right];
            left = (left + 1 + n) % n;
            right = (right + 1 + n) % n;
        }
        
        return v;
    }
};
