class Solution {
public:
    int buttonWithLongestTime(vector<vector<int>>& events) {

        int prev(0), mxt(-1), bb(-1);
        for(int p = 0; p < events.size(); p++){
            int ct = events[p][1] - prev;
            prev = events[p][1];
            if(ct > mxt){bb = events[p][0]; mxt = ct;}
            else if(ct == mxt){bb = std::min(bb, events[p][0]);}
        }

        return bb;
    }
};
