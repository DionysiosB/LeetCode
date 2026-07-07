class Solution {
public:
    int maxBoxesInWarehouse(vector<int>& boxes, vector<int>& warehouse) {

        int mnh(warehouse[0]);
        for(int p = 1; p < warehouse.size(); p++){
            mnh = warehouse[p] = std::min(mnh, warehouse[p]);
        }

        std::reverse(warehouse.begin(), warehouse.end());

        sort(boxes.begin(), boxes.end());

        int cnt(0), idx(0);
        for(int p = 0; p < warehouse.size() && idx < boxes.size(); p++){
            if(warehouse[p] >= boxes[idx]){++idx; ++cnt;}
        }

        return cnt;
    }
};
