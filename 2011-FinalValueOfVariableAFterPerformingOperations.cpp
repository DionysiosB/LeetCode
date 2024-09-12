class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int cnt(0);
        for(int p = 0; p < operations.size(); p++){
            cnt += (operations[p][1] == '+') - (operations[p][1] == '-');
        }
        return cnt;
    }
}
