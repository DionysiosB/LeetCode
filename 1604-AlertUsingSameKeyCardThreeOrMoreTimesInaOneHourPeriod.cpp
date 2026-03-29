class Solution {
public:
    vector<string> alertNames(vector<string>& keyName, vector<string>& keyTime) {

        std::map<std::string, std::vector<int> > m;
        for(int p = 0; p < keyName.size(); p++){
            std::string kt = keyTime[p];
            int minute = 60 * (10 * (kt[0] - '0') + (kt[1] - '0')) + (10 * (kt[3] - '0') + (kt[4] - '0'));
            m[keyName[p]].push_back(minute);
        }

        std::vector<std::string> alerts;
        for(std::map<std::string, std::vector<int> >::iterator it = m.begin(); it != m.end(); it++){
            std::string name = it->first;
            std::vector<int> vt = it->second;
            sort(vt.begin(), vt.end());
            for(long p = 2; p < vt.size(); p++){
                if(vt[p - 2] + 60 >= vt[p]){alerts.push_back(name); break;}
            }
        }
        
        sort(alerts.begin(), alerts.end());
        return alerts;
    }
};
