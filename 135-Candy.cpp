class Solution {
public:
    int candy(vector<int>& a) {
        
        int n = a.size();
        std::vector<int> dist(n, 1);
        for(int p = 1; p < n; p++){
            if(a[p] <= a[p - 1]) continue;
            dist[p] = 1 + dist[p - 1];
        }
        
        for(int p = n - 2; p >= 0; p--){
            if(a[p] <= a[p + 1]) continue;
            if(dist[p] >= dist[p + 1] + 1) continue;
            dist[p] = 1 + dist[p + 1];
        }
        
        int total(0);
        for(int p = 0; p < n; p++){total += dist[p];}
        return total;
    }
};
