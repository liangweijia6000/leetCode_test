class ParkingSystem {
public:
    ParkingSystem(int big, int medium, int small) {
        parking[0] = big;
        parking[1] = medium;
        parking[2] = small;
    }
    
    bool addCar(int carType) {
        //if(carType < 1 || carType > 3)
        //{
            //return false;
        //}
        if(parking[carType-1] > 0)
        {
            parking[carType-1] -= 1;
            return true;
        }else
        {
            return false;
        }
    }

    int parking[3];
};
