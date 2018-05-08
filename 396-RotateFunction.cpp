class Solution {
public:
    int maxRotateFunction(vector<int>& A) {
        
        size_t n = A.size();
        long long S(0), f(0), max(0);
        for(int p = 0; p < n; p++){S += A[p];}
        for(int p = 0; p < n; p++){f += p * A[p];}
        max = f;
        std::cout << f << std::endl;
        for(int p = 0; p < n; p++){
            f += n * A[p] - S;
            max = (max > f) ? max : f;
            std::cout << f << std::endl;
        }
        
        return max;
    }
};
