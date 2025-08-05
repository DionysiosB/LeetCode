class Solution {
public:
    vector<int> getModifiedArray(int length, vector<vector<int>>& updates) {
        std::vector<int> v(length + 1, 0);
        for(int p = 0; p < updates.size(); p++){
            int start = updates[p][0];
            int stop = updates[p][1];
            int inc = updates[p][2];
            v[start] += inc; v[stop + 1] -= inc;
        }
        v.pop_back();

        for(int p = 1; p < length; p++){v[p] += v[p - 1];}
        return v;
    }
};
