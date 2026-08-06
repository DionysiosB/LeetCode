class Solution {
public:

    bool oddset(int x){
        int odd(false);
        while(x){
            if(x & 1){odd = !odd;}
            x /= 2;
        }
        return odd;
    }

    int tripletCount(vector<int>& a, vector<int>& b, vector<int>& c) {

        int sa(0), sb(0), sc(0);
        for(int x : a){sa += oddset(x);}
        for(int x : b){sb += oddset(x);}
        for(int x : c){sc += oddset(x);}

        int cnt = (a.size() - sa) * sb * sc + sa * (b.size() - sb) * sc + sa * sb * (c.size() - sc) + (a.size() - sa) * (b.size() - sb) * (c.size() - sc);
        return cnt;        
    }
};
