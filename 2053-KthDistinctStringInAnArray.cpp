class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {

        std::set<std::string> m, u;
        for(long p = 0; p < arr.size(); p++){
            if(u.count(arr[p])){u.erase(arr[p]); m.insert(arr[p]);}
            else if(!m.count(arr[p])){u.insert(arr[p]);}
        }

        for(long p = 0; p < arr.size(); p++){
            if(u.count(arr[p])){
                if(--k == 0){return arr[p];}
            }
        }

        return "";
    }
};
