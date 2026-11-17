class Solution {
public:
    vector<int> beautifulIndices(string s, string a, string b, int k) {

        std::vector<int> va, vb;
        int idx(0);
        while(idx != std::string::npos){
            idx = s.find(a, idx);
            if(idx != std::string::npos){va.push_back(idx++);}
            else{break;}
        }
        
        idx = 0;
        while(idx != std::string::npos){
            idx = s.find(b, idx);
            if(idx != std::string::npos){vb.push_back(idx++);}
            else{break;}
        }

        std::vector<int> ans;        
        for(int p = 0; p < va.size(); p++){
            for(int q = 0; q < vb.size(); q++){
                if(std::abs(vb[q] - va[p]) <= k){ans.push_back(va[p]); break;}
            }
        }

        return ans;
    }
};
