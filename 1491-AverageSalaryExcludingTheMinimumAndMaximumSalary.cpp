class Solution {
public:
    double average(vector<int>& salary) {
        
        int n = salary.size();
        double s(0), mn(salary[0]), mx(salary[0]);
        for(int p = 0; p < n; p++){
            mn = (mn < salary[p] ? mn : salary[p]);
            mx = (mx > salary[p] ? mx : salary[p]);
            s += salary[p];
        }
        
        return (s - mn - mx) / (n - 2);
    }
};
