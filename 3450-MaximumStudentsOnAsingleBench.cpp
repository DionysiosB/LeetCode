class Solution {
public:
    int maxStudentsOnBench(vector<vector<int>>& students) {
        
        std::map<int, std::set<int> > mb;
        for(size_t p = 0; p < students.size(); p++){
            int student = students[p][0];
            int bench = students[p][1];
            mb[bench].insert(student);
        }

        int ans(0);
        for(std::map<int, std::set<int> >::iterator it = mb.begin(); it != mb.end(); it++){
            std::set<int> cur = it->second;
            ans = (ans > cur.size()) ? ans : cur.size();
        }

        return ans;
    }
};
