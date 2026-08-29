/**
 * The read4 API is defined in the parent class Reader4.
 *     int read4(char *buf4);
 */

class Solution {
public:
    /**
     * @param buf Destination buffer
     * @param n   Number of characters to read
     * @return    The number of actual characters read
     */
    int read(char *buf, int n) {
        int cnt(0), act(0);
        char tmp[4];

        for(int p = 0; p < (n + 3) / 4; p++){
            act = read4(tmp);
            for(int u = 0; u < act; u++){
                buf[cnt++] = tmp[u];
                if(cnt >= n){return n;}
            }
            
            if(act < 4){return cnt;} 
        }

        return -1;
    }
};
