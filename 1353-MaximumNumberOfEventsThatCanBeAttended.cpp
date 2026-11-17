class Solution {
public:
    int maxEvents(vector<vector<int>>& events) {

        const int n = events.size();
        sort(events.begin(), events.end());
        std::priority_queue<int, std::vector<int>, std::greater<int> > pq;  //Priority queue where we sort the ending days; Note the second argument is the container type
        int idx(0), cnt(0), day(0);
        while(!pq.empty() || idx < n){
            if(pq.empty() && idx < n && day < events[idx][0]){day = events[idx][0];}  //If there are gaps in the events, go to the next one
            while(idx < n && events[idx][0] <= day){pq.emplace(events[idx][1]); ++idx;}  //If there are events in the current day, add them to the priority queue
            while(!pq.empty() && day > pq.top()){pq.pop();} //Remove events that have already ended
            if(!pq.empty() && day <= pq.top()){++cnt; ++day; pq.pop();}  //Pick the event that ends the soonest
        }

        return cnt;
    }
};
