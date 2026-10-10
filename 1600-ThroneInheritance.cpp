class ThroneInheritance {
private:
    std::unordered_map<std::string, std::vector<std::string>> children;
    std::unordered_set<std::string> dead;
    std::string king;

public:
    ThroneInheritance(std::string kingName){king = kingName;}
    void birth(std::string parentName, std::string childName){children[parentName].push_back(childName);}
    void death(std::string name){dead.insert(name);}
    
    void dfs(std::string name, std::vector<std::string>& order) {
        if(!dead.count(name)){order.push_back(name);}
        for (std::string child : children[name]){dfs(child, order);}
    }

    std::vector<std::string> getInheritanceOrder() {
        std::vector<std::string> order;
        dfs(king, order);
        return order;
    }
};
