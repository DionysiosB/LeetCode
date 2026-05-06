class Solution {
public:
    bool isSumEqual(string firstWord, string secondWord, string targetWord) {

        int a(0); for(int p = 0; p < firstWord.size();  p++){a = 10 * a + (firstWord[p]  - 'a');}
        int b(0); for(int p = 0; p < secondWord.size(); p++){b = 10 * b + (secondWord[p] - 'a');}
        int c(0); for(int p = 0; p < targetWord.size(); p++){c = 10 * c + (targetWord[p] - 'a');}
        return (a + b == c);
    }
};
