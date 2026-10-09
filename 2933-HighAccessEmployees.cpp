class Solution {
public:
    vector<string> findHighAccessEmployees(vector<vector<string>>& access_times) {

        std::unordered_map<std::string, std::vector<int> > f;
        for(int p = 0; p < access_times.size(); p++){
            std::string who  = access_times[p][0];
            std::string when = access_times[p][1];

            int x(0); for(char c : when){x = 10 * x + (c - '0');}
            f[who].push_back(x);
        }

        std::vector<std::string> w;
        for(std::unordered_map<std::string, std::vector<int> >::iterator it = f.begin(); it != f.end(); it++){
            std::string name = it->first;
            std::vector<int> v = it->second;
            sort(v.begin(), v.end());

            for(int p = 2; p < v.size(); p++){
                if(v[p] < v[p - 2] + 100){w.push_back(name); break;}
            }
        }

        return w;
    }
};
