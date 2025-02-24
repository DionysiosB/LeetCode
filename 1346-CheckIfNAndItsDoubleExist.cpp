class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        std::set<int> s;
        for(int p = 0; p < arr.size(); p++){
            if(s.count(2 * arr[p])){return true;}
            else if(arr[p] % 2 == 0 && s.count(arr[p] / 2)){return true;}
            s.insert(arr[p]);
        }
        
        return false;
    }
};
