class Solution {
public:

    int gcd(int a, int b){return a ? gcd(b % a, a) : b;}

    int mirrorReflection(int p, int q) {
        int g = gcd(p, q);
        int m( (p / g) % 2), n( (q / g) % 2);

        if(m && n){return 1;}
        else if(m){return 0;}
        else{return 2;}
    }
};
