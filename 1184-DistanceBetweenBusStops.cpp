class Solution {
public:
    int distanceBetweenBusStops(vector<int>& distance, int start, int destination) { 
        int n = distance.size();
        int distA(0), distB(0);
        for(int p = start; p != destination; p = (p + 1) % n){distA += distance[p];}
        for(int p = destination; p != start; p = (p + 1) % n){distB += distance[p];}
        return distA < distB ? distA : distB;
    }
};
