bool cmp(const std::vector<int> &a, const std::vector<int> &b){return a[1] > b[1];}

class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        sort(boxTypes.begin(), boxTypes.end(), cmp);
        int total(0);
        for(int p = 0; truckSize > 0 && p < boxTypes.size(); p++){
            int num = (boxTypes[p][0] < truckSize ? boxTypes[p][0] : truckSize);
            total += num * boxTypes[p][1];
            truckSize -= num;
        }

        return total;
    }
};
