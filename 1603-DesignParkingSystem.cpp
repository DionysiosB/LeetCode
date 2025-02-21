class ParkingSystem {
public:
    ParkingSystem(int big, int medium, int small) {
        fb = big;
        fm = medium;
        fs = small;
    }
    
    bool addCar(int carType) {
        if(carType == 1){return (--fb >= 0);}
        else if(carType == 2){return (--fm >= 0);}
        else if(carType == 3){return (--fs >= 0);}
        return false;
    }
    
    int fb{0}, fm{0}, fs{0};
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */
