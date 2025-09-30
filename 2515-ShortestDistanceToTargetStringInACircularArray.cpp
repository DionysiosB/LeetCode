class Solution {
public:
    int closetTarget(vector<string>& words, string target, int startIndex) {
        const int n = words.size();
        int dist(-1);
        for(int p = startIndex; p < startIndex + n; p++){
            int idx = p % n;
            if(words[idx] == target){dist = p - startIndex; break;}
        }
        int prev(dist); dist = -1;
        for(int p = startIndex; p >= startIndex - n; p--){
            int idx = (2 * n + p) % n;
            if(words[idx] == target){dist = startIndex - p; break;}
        }

        return (dist < prev ? dist : prev);
    }
};
