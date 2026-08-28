class Solution {
public:
    bool canFormArray(vector<int>& arr, vector<vector<int>>& pieces) {

        std::map<int, int> mpos;
        for(size_t p = 0; p < arr.size(); p++){mpos[arr[p]] = p;}

        for(std::vector<int> v : pieces){
            int prevpos(-1);
            for(size_t p = 0; p < v.size(); p++){
                if(!mpos.count(v[p])){return false;}
                int pos = mpos[v[p]];
                mpos.erase(v[p]);
                if(prevpos >= 0 && pos != prevpos + 1){return false;}
                prevpos = pos;
            }
        }

        return mpos.empty();
    }
};
