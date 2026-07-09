class NumberContainers {
public:
    NumberContainers() {
        idxtonum = std::map<int, int>();
        numtoidx = std::map<int, std::set<int> >(); 
    }
    
    void change(int index, int number) {

        if(idxtonum.count(index)){
            int prev = idxtonum[index];
            numtoidx[prev].erase(index);
        }

        idxtonum[index] = number;
        numtoidx[number].insert(index);
    }
    
    int find(int number) {

        if(numtoidx.count(number) && !numtoidx[number].empty()){return *numtoidx[number].begin();}
        return -1;
    }

private:
    std::map<int, int> idxtonum;
    std::map<int, std::set<int> > numtoidx;
};

/**
 * Your NumberContainers object will be instantiated and called as such:
 * NumberContainers* obj = new NumberContainers();
 * obj->change(index,number);
 * int param_2 = obj->find(number);
 */
