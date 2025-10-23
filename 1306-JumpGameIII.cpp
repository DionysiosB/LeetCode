class Solution {
public:
    bool canReach(vector<int>& arr, int start) {
        std::vector<bool> vis(arr.size(), 0);
        std::queue<int> q; q.push(start);
        while(!q.empty()){
            int x = q.front();
            vis[x] = 1; q.pop();
            int step = arr[x];
            if(!step){return true;}
            if(x + step < arr.size() && !vis[x + step]){q.push(x + step);}
            if(x - step >= 0 && !vis[x - step]){q.push(x - step);}
        }

        return false;
    }
};
