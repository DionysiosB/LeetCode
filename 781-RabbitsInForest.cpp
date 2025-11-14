class Solution {
public:
    int numRabbits(vector<int>& answers) {
        std::unordered_map<long, long> m;
        for(long p = 0; p < answers.size(); p++){++m[answers[p]];}

        long total(0);
        for(std::unordered_map<long, long>::iterator it = m.begin(); it != m.end(); it++){
            long key = it->first;
            long val = it->second;
            total += (key + 1) * ((val + key) / (key + 1));
        }

        return total;
    }
}
