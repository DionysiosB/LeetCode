class Solution {
public:

    bool isPrime(int x){
        if(x < 2){return false;}
        for(int p = 2; p * p <= x; p++){if(x % p == 0){return false;}}
        return true;
    }


    bool completePrime(int num) {

        std::vector<int> v;
        int u(num); while(u){v.push_back(u % 10); u /= 10;}
        std::reverse(v.begin(), v.end());

        for(int p = 0; p < v.size(); p++){
            u = 10 * u + v[p];
            if(!isPrime(u)){return false;}
        }

        for(int p = 0; p < v.size(); p++){
            int b(0);
            for(int q = p; q < v.size(); q++){b = 10 * b + v[q];}
            if(!isPrime(b)){return false;}
        }

        return true;
    }
};
