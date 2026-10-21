class Solution {
public:
    long long numberOfWeeks(vector<int>& milestones) {

        long long mx(0), total(0);
        for(int cm : milestones){
            mx = (mx > cm ? mx : cm);
            total += cm;
        }

        if(total - mx + 1 >= mx){return total;}
        else{return 2 * (total - mx) + 1;}
    }
};
