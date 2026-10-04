class Solution {
public:
    long long taskSchedulerII(vector<int>& tasks, int space) {

        std::unordered_map<int, long long> m;
        long long t(0);
        for(int task : tasks){
            if(m.count(task) && m[task] > t){t = m[task];}
            ++t;
            m[task] = (long long)t + space;
        }

        return t;
    }
};
