//PoliceOfficer definition and implementation file
#ifndef POLICEOFFICER_HPP
#define POLICEOFFICER_HPP
#include <string>
#include "parkedCar.hpp"
#include "parkingMeter.hpp"
#include "parkingTicket.hpp"
using namespace std;

class PoliceOfficer {
private:
  string name;
  string badgeNum;
public:
  //pre: name and badgeNum are valid values. post: a PoliceOfficer object is created with the given values.
  PoliceOfficer(string n, string bn) {
    name = n;
    badgeNum = bn;
  }
  //pre: none. post: returns the name of the officer.
  string getName() {
    return name;
  }
  //pre: none. post: returns the badge number of the officer.
  string getBadgeNum() {
    return badgeNum;
  }
  //pre: car and meter are pointers to valid objects. post: true is returned if the car is parked for more than the meter's time purchased. false is returned otherwise.
  bool needsTicket(ParkedCar* car, ParkingMeter* meter) {
    return (car->getMinutesParked() > meter->getTimePurchased());
  }
  //pre: ParkedCar, ParkingMeter, and this (policeOfficer) are valid objects post: returns a ParkingTicket object with the values required.
  ParkingTicket* issueTicket(ParkedCar* car, ParkingMeter* meter) {
    return new ParkingTicket(car, meter, this);
  }
};
#endif