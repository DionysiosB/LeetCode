class Solution {
public:
    int countPairs(vector<int>& deliciousness) {
        const int MOD = 1e9 + 7;
        std::map<int, int> m;
        for(int x : deliciousness){++m[x];}

        long long cnt(0);
        for(std::map<int, int>::iterator it = m.begin(); it != m.end(); it++){
            int key = it->first;
            long long val = it->second;

            int target(1);
            for(int p = 0; p < 23; p++){
                if(target == key){cnt += val * (val - 1) / 2;}
                else if(target - key > key && m.count(target - key)){cnt += val * m[target - key];}
                cnt %= MOD;
                target *= 2;
            }
        }

        return (int) cnt;
    }
};
