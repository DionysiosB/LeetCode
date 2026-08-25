class Solution {
public:
    int badSensor(vector<int>& sensor1, vector<int>& sensor2) {

        const size_t n = sensor1.size();

        bool a(0);
        for(size_t p = 0; p + 1 < n; p++){
            if(!a && sensor1[p] == sensor2[p]){continue;}
            a = 1;

            if(sensor1[p + a] != sensor2[p] && sensor1[p] == sensor2[p + a]){return 1;}
            else if(sensor1[p + a] == sensor2[p] && sensor1[p] != sensor2[p + a]){return 2;}
        }

        return -1;
    }
};
