class Solution {
public:
    int finalPositionOfSnake(int n, vector<string>& commands) {

        int row(0), col(0);
        for(int p = 0; p < commands.size(); p++){
            if(commands[p] == "UP"){--row;}
            else if(commands[p] == "DOWN"){++row;}
            else if(commands[p] == "LEFT"){--col;}
            else if(commands[p] == "RIGHT"){++col;}
        }

        return row * n + col;
    }
};
