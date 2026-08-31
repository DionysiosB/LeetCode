class Solution {
public:
    bool phonePrefix(vector<string>& numbers) {

        sort(numbers.begin(), numbers.end());
        for(size_t p = 0; p < numbers.size(); p++){
            for(size_t q = p + 1; q < numbers.size(); q++){
                if(numbers[p][0] != numbers[q][0]){break;}
                if(numbers[q].find(numbers[p]) == 0){return false;}
            }
        }

        return true;
    }
};
