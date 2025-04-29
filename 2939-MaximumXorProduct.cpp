typedef long long ll;

class Solution {
public:
    int maximumXorProduct(ll a, ll b, int n){
        const ll MOD = 1e9 + 7;
        ll x = (1LL << n);
        for(long p = 0; p < n; p++){
            x >>= 1;
            std::cout << x << std::endl;
            if(!(a & x) && !(b & x)){a |= x; b |= x;}
            else if((a & x) ^ (b & x)){
                if(a > b){a &= (~x); b |= x;}
                else{a |= x; b &= (~x);}
            }
        }
        
        a %= MOD; b %= MOD;
        return (a * b) % MOD;
    }
};
