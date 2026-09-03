class Solution {
public:
    string betterCompression(string compressed) {

        const int B = 26;
        compressed += '_';
        std::vector<int> v(B, 0);
        int key(compressed[0] - 'a'), f(0);
        for(size_t p = 1; p < compressed.size(); p++){
            if('0' <= compressed[p] && compressed[p] <= '9'){f = 10 * f + (compressed[p] - '0');}
            else{
                v[key] += f;
                f = 0;
                key = (compressed[p] - 'a');
            }
        }

        std::string s("");
        for(int p = 0; p < B; p++){
            if(!v[p]){continue;}
            s += (char)(p + 'a');
            s += std::to_string(v[p]);
        }

        return s;
    }
};
