class Solution {
public:
    vector<int> closestDivisors(int num) {

        int a(0), b(0);
        for(int p = sqrt(num + 1); p > 0; p--){
            if((num + 1) % p){continue;}
            a = p; b = (num + 1) / p;
            break;
        }


        int c(0), d(0);
        for(int p = sqrt(num + 2); p > 0; p--){
            if((num + 2) % p){continue;}
            c = p; d = (num + 2) / p;
            break;
        }


        int abd(num + 2);
        if(a && b){abd = std::abs(a - b);}

        int cdd(num + 2);
        if(c && d){cdd = std::abs(c - d);}

        std::vector<int> v(2);
        v[0] = a; v[1] = b;
        if(cdd < abd){v[0] = c; v[1] = d;}
        return v;

    }
};
