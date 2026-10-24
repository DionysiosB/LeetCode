class Solution {
public:
    int earliestTime(vector<vector<int>>& tasks) {

        int mnt(tasks[0][0] + tasks[0][1]);
        for(std::vector<int> x : tasks){
            int tf = x[0] + x[1];
            mnt = (mnt < tf ? mnt : tf);
        }

        return mnt;
    }
};
