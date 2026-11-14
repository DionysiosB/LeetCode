class Solution {
public:

    int logtwo(long long x){
        int w(0);
        while(x > 1){++w; x /= 2;}
        return w;
    }


    char kthCharacter(long long k, vector<int>& operations) {
        const int B = 26;

        int idx(0);
        while(k > 1){
            int t = logtwo(k) - (!(k & (k - 1)));
            k -= (1LL << t);
            idx += operations[t];
        }

        return 'a' + (idx % B);
    }
};
