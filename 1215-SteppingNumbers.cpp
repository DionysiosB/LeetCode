class Solution {
public:
    vector<int> countSteppingNumbers(int low, int high) {

        std::vector<int> v;
        if(low <= 0){v.push_back(0);}
        
        std::queue<int> q;
        for(int p = 1; p < 10; p++){
            if(low <= p && p <= high){v.push_back(p);}
            q.push(p);
        }
        
        while(!q.empty()){
            int64_t x = q.front(); q.pop();
            int a = (x % 10) - 1;
            int b = (x % 10) + 1;

            if(a >= 0){
                int64_t y = 10 * x + a;
                if(low <= y && y <= high){v.push_back(y);}
                if(y <= high){q.push(y);}
            }

            if(b <= 9){
                int64_t y = 10 * x + b;
                if(low <= y && y <= high){v.push_back(y);}
                if(y <= high){q.push(y);}
            }
        }

        sort(v.begin(), v.end());
        return v;
    }
};
