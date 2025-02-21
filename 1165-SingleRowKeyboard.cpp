class Solution {
public:
    int calculateTime(string keyboard, string word){
        
        std::vector<int> v(26, 0);
        for(int p = 0; p < keyboard.size(); p++){v[keyboard[p] - 'a'] = p;}
        int cnt(0);
        for(int p = 0; p < word.size(); p++){
            int diff = v[word[p] - 'a'] - (p > 0 ? v[word[p - 1] - 'a'] : v[keyboard[0] - 'a']);
            diff = (diff > 0 ? diff : -diff);
            cnt += diff;
        }
        
        return cnt;
    }
};
