class Solution {
public:
    int numberOfWeakCharacters(vector<vector<int>>& properties) {

        sort(properties.rbegin(), properties.rend());

        int cnt(0), mxc(0), mxf(0);
        for(int p = 0; p < properties.size(); p++){
            if(!p || properties[p - 1][0] != properties[p][0]){mxf = std::max(mxf, mxc);}
            mxc = std::max(mxc, properties[p][1]);
            cnt += (properties[p][1] < mxf);
        }

        return cnt;
    }
};
