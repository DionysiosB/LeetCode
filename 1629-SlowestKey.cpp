class Solution {
public:
    char slowestKey(vector<int>& releaseTimes, string keysPressed) {

        long prev(0), mxd(0); char key = 'a'; 
        for(long p = 0; p < keysPressed.size(); p++){
            long dur = releaseTimes[p] - prev;
            prev = releaseTimes[p];
            if(dur > mxd){key = keysPressed[p]; mxd = dur;}
            else if(dur == mxd && key < keysPressed[p]){key = keysPressed[p];}
        }

        return key;
    }
};
