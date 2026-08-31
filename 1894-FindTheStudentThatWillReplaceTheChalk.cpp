class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
        
        long long sum(0);
        for(int cp : chalk){sum += cp;}
        k %= sum;
        for(size_t p = 0; p < chalk.size(); p++){
            k -= chalk[p];
            if(k < 0){return p;}
        }

        return -1;
    }
};
