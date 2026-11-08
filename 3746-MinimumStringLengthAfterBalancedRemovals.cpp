class Solution {
public:
    int minLengthAfterRemovals(string s) {
        int a(0), b(0);
        for(char x : s){
            a += (x == 'a');
            b += (x == 'b');
        }

        return (s.size() - 2 * (a < b ? a : b));
    }
};
