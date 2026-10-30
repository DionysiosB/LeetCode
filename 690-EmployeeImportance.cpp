/*
// Definition for Employee.
class Employee {
public:
    int id;
    int importance;
    vector<int> subordinates;
};
*/

class Solution {
public:

    int dfs(const std::vector<Employee*> &employees, std::unordered_map<int, int> &m, int id){

        const int idx = m[id];
        const Employee emp = *employees[idx];
        std::vector<int> subs = emp.subordinates;

        int total(emp.importance);
        for(int p = 0; p < subs.size(); p++){total += dfs(employees, m, subs[p]);}
        return total;
    }

    int getImportance(vector<Employee*> employees, int id) {
        const int n = employees.size();
        std::unordered_map<int, int> m;
        for(int p = 0; p < n; p++){m[employees[p]->id] = p;}
        return dfs(employees, m, id);
    }
};
