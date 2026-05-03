class Solution {
public:
    vector<int> memLeak(int memory1, int memory2) {
        
        std::vector<int> v(3);
        for(int p = 1; p < 2e9; p++){
            if(memory1 >= memory2){memory1 -= p;}
            else{memory2 -= p;}
            if(memory1 < 0 || memory2 < 0){
                v[0] = p; v[1] = memory1; v[2] = memory2;
                v[1 + (memory2 < 0)] += p;
                break;
            }
        }

        return v;
    }
};
