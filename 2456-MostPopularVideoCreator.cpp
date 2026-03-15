class Solution {
public:
    vector<vector<string>> mostPopularCreator(vector<string>& creators, vector<string>& ids, vector<int>& views) {
        std::map<std::string, long long> mt;
        std::map<std::string, std::string> mw;
        std::map<std::string, long long> mc;

        const int n = views.size();

        for(int p = 0; p < n; p++){
            const std::string creator = creators[p];
            const std::string cid = ids[p];
            const int cv = views[p];

            if(mt.count(creator)){
                mt[creator] += cv;
                if(mc[creator] < cv){mw[creator] = cid; mc[creator] = cv;}
                else if(mc[creator] == cv){mw[creator] = (cid < mw[creator] ? cid : mw[creator]);}
            }
            else{
                mt[creator] = cv;
                mw[creator] = cid; 
                mc[creator] = cv;
            }  
        }

        long long mxv(0);
        for(std::map<std::string, long long>::iterator it = mt.begin(); it != mt.end(); it++){
            long long cur = it->second;
            mxv = (mxv > cur ? mxv : cur);
        }

        std::vector<std::vector<std::string> > v;
        for(std::map<std::string, long long>::iterator it = mt.begin(); it != mt.end(); it++){
            std::string who = it->first;
            long long ctv = it->second;
            if(ctv < mxv){continue;}
            std::vector<std::string> w; w.push_back(who); w.push_back(mw[who]);
            v.push_back(w);
        }

        return v;
    }
};
