class Solution {
public:
    int distinctIntegers(int n) {
        std::queue<int> q; q.push(n);
        std::set<int> s; s.insert(n);

        while(!q.empty()){
            int x = q.front(); q.pop();
            for(int p = 2; p < x; p++){
                if(x % p == 1 && !s.count(p)){s.insert(p); q.push(p);}
            }
        }

        return s.size();
    }
};
