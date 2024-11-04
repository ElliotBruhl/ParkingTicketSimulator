#ifndef PARKINGTICKET_HPP
#define PARKINGTICKET_HPP
#include "parkedCar.hpp"
#include "parkingMeter.hpp"

class PoliceOfficer;

class ParkingTicket {
private:
  ParkedCar* car;
  ParkingMeter* meter;
  PoliceOfficer* officer;
public:
  //pre: car, meter, and officer are pointers to valid objects. post: a ParkingTicket object is created with the given values.
  ParkingTicket(ParkedCar* car, ParkingMeter* meter, PoliceOfficer* officer);
  //pre: none. post: none
  void displayTicket();
};
#endif