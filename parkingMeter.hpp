//ParkingMeter definition and implementation file
#ifndef PARKINGMETER_HPP
#define PARKINGMETER_HPP

class ParkingMeter {
private:
  int timePurchased;
public:
  //pre: timePurchased is a valid value. post: a ParkingMeter object is created with the given value.
  ParkingMeter(int tP) { 
    timePurchased = tP;
  }
  //pre: none. post: returns the time purchased.
  int getTimePurchased() {
    return timePurchased;
  }
};
#endif