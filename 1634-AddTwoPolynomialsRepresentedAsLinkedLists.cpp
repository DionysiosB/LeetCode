/**
 * Definition for polynomial singly-linked list.
 * struct PolyNode {
 *     int coefficient, power;
 *     PolyNode *next;
 *     PolyNode(): coefficient(0), power(0), next(nullptr) {};
 *     PolyNode(int x, int y): coefficient(x), power(y), next(nullptr) {};
 *     PolyNode(int x, int y, PolyNode* next): coefficient(x), power(y), next(next) {};
 * };
 */

class Solution {
public:
    PolyNode* addPoly(PolyNode* poly1, PolyNode* poly2) {

        std::map<int, int> m;

        PolyNode* x = poly1;
        while(x){m[x->power] += x->coefficient; x = x->next;}
        x = poly2;
        while(x){m[x->power] += x->coefficient; x = x->next;}

        PolyNode* res = nullptr;
        for(std::map<int, int>::iterator it = m.begin(); it != m.end(); it++){
            int pow = it->first;
            int coef = it->second;
            if(!coef){continue;}
            PolyNode* cur = new PolyNode(coef, pow, res);
            res = cur;
        }

        return res;
    }
};
