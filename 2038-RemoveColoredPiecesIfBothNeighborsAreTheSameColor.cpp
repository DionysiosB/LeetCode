class Solution {
public:
    bool winnerOfGame(string colors) {

        int a(0), b(0);
        for(size_t p = 1; p + 1 < colors.size(); p++){
            a += (colors[p - 1] == 'A' && colors[p] == 'A' && colors[p + 1] == 'A');
            b += (colors[p - 1] == 'B' && colors[p] == 'B' && colors[p + 1] == 'B');
        }

        return a > b;
    }
};
