class Solution {
public:
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {

        std::vector<int> v(words.size(), 0);
        for(int p = 0; p < words.size(); p++){
            v[p] = (p ? v[p - 1] : 0)  + check(words[p]);
        }

        std::vector<int> res(queries.size());
        for(int p = 0; p < queries.size(); p++){
            int left = queries[p][0];
            int right = queries[p][1];
            res[p] = v[right] - (left ? v[left - 1] : 0);
        }

        return res;
    }

private:
    bool check(std::string w){
        return (w[0] == 'a' || w[0] == 'e' || w[0] == 'i' || w[0] == 'o' || w[0] == 'u') && (w.back() == 'a' || w.back() == 'e' || w.back() == 'i' || w.back() == 'o' || w.back() == 'u');
    }
};
