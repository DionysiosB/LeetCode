class Solution {
public:
    int distMoney(int money, int children) {
        if(children == 1){return ((money == 8) - (money == 4));}
        money -= children;
        if(money < 0){return -1;}
        if(money < 7){return 0;}
        
        int div = money / 7;
        if(div == children - 1){
            if(money % 7 == 3){return children - 2;}
            else{return children - 1;}
        }
        else if(div < children){return (money / 7);}
        else if(div == children){return children - (money % 7 > 0);}
        else{return children - 1;}
        
    }
};
