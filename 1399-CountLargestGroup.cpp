class Solution {
public:
    int countLargestGroup(int n) {
        std::map<int, int> m;
        int mxs(0), mxn(0);
        for(int p = 1; p <= n; p++){
            int x(p), sd(0);
            while(x){sd += (x % 10); x /= 10;}
            ++m[sd];
            if(m[sd] > mxs){mxs = m[sd]; mxn = 1;}
            else if(m[sd] == mxs){++mxn;}
        }
        
        
        return mxn;
    }
};
