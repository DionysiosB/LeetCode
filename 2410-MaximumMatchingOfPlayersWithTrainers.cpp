class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) {
        sort(players.begin(), players.end());
        sort(trainers.begin(), trainers.end());

        int idx(0), cnt(0);
        for(int p = 0; p < trainers.size() && idx < players.size(); p++){
            if(players[idx] <= trainers[p]){++idx; ++cnt;}
        }

        return cnt;
    }
};
