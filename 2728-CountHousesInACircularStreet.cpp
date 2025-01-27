/**
 * Definition for a street.
 * class Street {
 * public:
 *     Street(vector<int> doors);
 *     void openDoor();
 *     void closeDoor();
 *     bool isDoorOpen();
 *     void moveRight();
 *     void moveLeft();
 * };
 */
class Solution {
public:
    int houseCount(Street* street, int k) {
        for(int p = 0; p < k; p++){street->openDoor(); street->moveRight();}
        
        int cnt(0);
        for(int p = 0; street->isDoorOpen() && p < k; p++){
            ++cnt;
            street->closeDoor();
            street->moveRight();
        }
        
        return cnt;       
    }
};
