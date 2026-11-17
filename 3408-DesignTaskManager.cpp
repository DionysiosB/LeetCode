class TaskManager {
public:
    TaskManager(vector<vector<int>> tasks) {
        for(std::vector<int> task : tasks) {
            tm[task[1]] = std::make_pair(task[2], task[0]);
            pm.emplace(task[2], task[1]);
        }
    }

    void add(int userId, int taskId, int priority) {
        tm[taskId] = std::make_pair(priority, userId);
        pm.emplace(priority, taskId);
    }

    void edit(int taskId, int newPriority) {
        if (tm.find(taskId) != tm.end()) {
            tm[taskId].first = newPriority;
            pm.emplace(newPriority, taskId);
        }
    }

    void rmv(int taskId){tm.erase(taskId);}

    int execTop() {
        while (!pm.empty()) {
            std::pair<int, int> st = pm.top();
            pm.pop();
            int priority = st.first;
            int taskId = st.second;

            if (tm.find(taskId) != tm.end() && tm[taskId].first == priority) {
                int userId = tm[taskId].second;
                tm.erase(taskId);
                return userId;
            }
        }

        return -1;
    }

private:
    unordered_map<int, pair<int, int>> tm;
    priority_queue<pair<int, int>> pm;
};

/**
 * Your TaskManager object will be instantiated and called as such:
 * TaskManager* obj = new TaskManager(tasks);
 * obj->add(userId,taskId,priority);
 * obj->edit(taskId,newPriority);
 * obj->rmv(taskId);
 * int param_4 = obj->execTop();
 */
