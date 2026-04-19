class Solution {
public:
    string convertDateToBinary(string date) {

        int year = 1000 * (date[0] - '0') + 100 * (date[1] - '0') + 10 * (date[2] - '0') + (date[3] - '0');
        int month = 10 * (date[5] - '0') + (date[6] - '0');
        int day = 10 * (date[8] - '0') + (date[9] - '0');

        std::string ys(""); while(year){ys += (char)('0' + (year % 2)); year /= 2;}
        std::string ms(""); while(month){ms += (char)('0' + (month % 2)); month /= 2;}
        std::string ds(""); while(day){ds += (char)('0' + (day % 2)); day /= 2;}
        std::reverse(ys.begin(), ys.end());
        std::reverse(ms.begin(), ms.end());
        std::reverse(ds.begin(), ds.end());

        std::string ans = ys + "-" + ms + "-" + ds;
        return ans;
    }
};
