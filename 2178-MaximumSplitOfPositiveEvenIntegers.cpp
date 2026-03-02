class Solution {
public:
    vector<long long> maximumEvenSplit(long long finalSum) {
        std::vector<long long> v;
        if(finalSum % 2){return v;}
        for(long p = 2; p <= finalSum; p += 2){
            v.push_back(p);
            finalSum -= p;
        }

        if(finalSum){v.back() += finalSum;}
        return v;
    }
};
