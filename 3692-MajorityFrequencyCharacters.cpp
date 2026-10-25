class Solution {
public:
    string majorityFrequencyGroup(string s) {
        std::map<char, int> fm;
        for(char x : s){++fm[x];}
        
        std::map<int, std::set<char> > sm;
        int mxsz(0), mxf(0);
        for(std::pair<char, int> cf : fm){
            char x = cf.first;
            int freq = cf.second;
            sm[freq].insert(x);
            if((sm[freq].size() > mxsz) || (sm[freq].size() == mxsz && freq > mxf)){mxsz = sm[freq].size(); mxf = freq;}
        }

        std::string res("");
        for(char x : sm[mxf]){res += x;}
        return res;        
    }
};
