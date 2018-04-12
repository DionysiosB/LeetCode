class Solution {
public:
    bool isHappy(int n) {
        std::set<int> prev;

        while(n > 1){
            int x(0);
            while(n > 0){
                int rem = n % 10;
                n /= 10;
                x += rem * rem;
            }

            if(prev.count(x) > 0){return false;}
            prev.insert(x);
            n = x;
        }

        return true;
    }
};
