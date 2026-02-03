class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        
        int cnt(0);
        for(long p = 0; p < tickets.size(); p++){
            if(p <= k){cnt += std::min(tickets[p], tickets[k]);}
            else{cnt += std::min(tickets[p], tickets[k] - 1);}
        }

        return cnt;
    }
};
