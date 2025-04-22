class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        sort(capacity.rbegin(), capacity.rend());
        int total(0);
        for(int p = 0; p <apple.size(); p++){total += apple[p];}
        
        int idx(0);
        for(int p = 0; p < capacity.size(); p++){
            idx = p + 1;
            total -= capacity[p];
            if(total <= 0){break;}
        }
        
        return idx;
    }
};
