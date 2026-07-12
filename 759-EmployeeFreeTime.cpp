/*
// Definition for an Interval.
class Interval {
public:
    int start;
    int end;

    Interval() {}

    Interval(int _start, int _end) {
        start = _start;
        end = _end;
    }
};
*/

class Solution {
public:
    vector<Interval> employeeFreeTime(vector<vector<Interval>> schedule) {

        std::map<int, int> m;
        for(std::vector<Interval> work : schedule){
            for(Interval cur : work){
                ++m[cur.start];
                --m[cur.end];
            }
        }

        int cs(0);
        int prevtime(-1);
        std::vector<Interval> fv;

        for(std::map<int, int>::iterator it = m.begin(); it != m.end(); it++){
            if(!cs && prevtime >= 0){
                Interval freetime(prevtime, it->first);
                fv.push_back(freetime);
            }
            cs += it->second;
            if(!cs){prevtime = it->first;}
        }

        return fv;
    }
};
