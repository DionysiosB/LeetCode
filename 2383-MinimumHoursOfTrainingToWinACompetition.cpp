class Solution {
public:
    int minNumberOfHours(int initialEnergy, int initialExperience, vector<int>& energy, vector<int>& experience) {

        int cnrg(initialEnergy), res(0);
        for(int oppnrg: energy){
            if(cnrg <= oppnrg){
                int diff = (1 + oppnrg - cnrg);
                res += diff; cnrg += diff;
            }
            cnrg -= oppnrg;
        }

        std::cout << res << std::endl;
        int xpr(initialExperience);
        for(int oppexp : experience){
            if(xpr <= oppexp){
                int diff = (1 + oppexp - xpr);
                res += diff; xpr += diff;
            }
            xpr += oppexp;
        }

        return res;
    }
};
