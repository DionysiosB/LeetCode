class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        int n = A.size();
        std::vector<bool> a(n + 1, 0), b(n + 1, 0);
        std::vector<int> C(n);
        int cnt(0);
        for(int p = 0; p < n; p++){
            a[A[p]] = 1; b[B[p]] = 1;
            cnt += a[B[p]] + b[A[p]] - (A[p] == B[p]);
            C[p] = cnt;
        }
        return C;
    }
};
