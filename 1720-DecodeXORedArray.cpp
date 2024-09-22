class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        std::vector<int> dec(encoded.size() + 1, 0);
        dec[0] = first;
        for(int p = 1; p < dec.size(); p++){dec[p] = dec[p - 1] ^ encoded[p - 1];}
        return dec;
    }
}
