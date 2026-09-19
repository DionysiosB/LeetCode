class Solution {
public:
    int clumsy(int n) {

        if(n <= 2){return n;}
        else if(n <= 4){return n + 3;}

        if((n - 4) % 4 == 0){return n + 1;}
        else if((n - 4) % 4 <= 2){return n + 2;}
        else{return n - 1;} 
        
    }
};
