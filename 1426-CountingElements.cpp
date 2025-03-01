class Solution {
public:
    int countElements(vector<int>& arr) {
        
        std::set<int> s; for(int p = 0; p < arr.size(); p++){s.insert(arr[p]);}
        int total(0);
        for(int p = 0; p < arr.size(); p++){total += s.count(arr[p] + 1);}
        return total;
    }
};
