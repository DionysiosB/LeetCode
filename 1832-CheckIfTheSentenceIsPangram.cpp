class Solution {
public:
    bool checkIfPangram(string sentence) {
        const int B = 26;
        std::vector<bool> a(B, 0); int rem(B);
        for(int p = 0; p < sentence.size(); p++){
            int idx = sentence[p] - 'a';
            rem -= (1 - a[idx]); a[idx] = 1;
        }

        return (!rem);
        
    }
};
