class Solution {
public:
    int maxTransactions(vector<int>& transactions) {

        std::multiset<int> s;
        long long cs(0), cnt(0);
        for(int x : transactions){
            cs += x;
            if(x < 0){s.insert(x);}
            while(cs < 0){++cnt; cs -= *s.begin(); s.erase(s.begin());}
        }

        return transactions.size() - cnt;
    }
};
