/**
 * The read4 API is defined in the parent class Reader4.
 *     int read4(char *bf);
 */

class Solution {
public:
    int read(char *buf, int n) {
        int idx(0);
        while(idx < n && (idxf < nf || (idxf = 0) < (nf = read4(bf)))){buf[idx++] = bf[idxf++];}
        return idx;
    }

    char bf[4];
    int idxf{0}, nf{0};
};
