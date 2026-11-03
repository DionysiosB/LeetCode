class Solution {
public:
    int hIndex(vector<int>& citations) {

        std::reverse(citations.begin(), citations.end());
        int h(0);
        for(int p = 0; p < citations.size(); p++){
            if(p < citations[p]){h = p + 1;}
        }

        return h;
    }
};
