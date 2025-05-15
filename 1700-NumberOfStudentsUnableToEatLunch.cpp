class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int a(0), b(0);
        for(int p = 0; p < students.size(); p++){
            a += (!students[p]);
            b += students[p];
        }

        for(int p = 0; p < sandwiches.size(); p++){
            if(sandwiches[p]){--b; if(b < 0){return a;}}
            else{--a; if(a < 0){return b;}}
        }

        return 0;
    }
};
