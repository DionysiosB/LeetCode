class Solution {
public:
    int countCollisions(string directions) {

        char prev('L');
        int cnt(0), right(0);
        for(char x : directions){
            if(x == 'L'){
                if(prev == 'L'){continue;}
                else if(prev == 'S'){++cnt;}
                else if(prev == 'R'){cnt += (right + 1); right = 0;}
                prev = 'S';
            }
            else if(x == 'S'){
                if(prev == 'S'){continue;}
                else if(prev == 'L'){prev = 'S';}
                else if(prev == 'R'){cnt += right; right = 0; prev = 'S';}
            }
            else if(x == 'R'){
                if(prev == 'L' || prev == 'S'){prev = 'R'; right = 1;}
                else if(prev == 'R'){++right;}
            }
        }

        return cnt;
        
    }
};
