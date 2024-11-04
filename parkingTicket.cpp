//ParkingTicket implementation file
#include "parkingTicket.hpp"
#include "policeOfficer.hpp"
#include <iostream>

ParkingTicket::ParkingTicket(ParkedCar* car, ParkingMeter* meter, PoliceOfficer* officer) {
  this->car = car;
  this->meter = meter;
  this->officer = officer;
}
void ParkingTicket::displayTicket() {
  int extraTime = car->getMinutesParked() - meter->getTimePurchased();
  int fine = 25;
  if (extraTime > 0) {
    fine += (extraTime-1)/60 * 10;
  }
  std::cout << "*** Parking Ticket ***\n";
  std::cout << "Officer " << officer->getName() << " Badge Number " << officer->getBadgeNum() << "\n";
  std::cout << "Vehicle Licence Number: " << car->getLicenseNum() << "\n";
  std::cout << "Make: " << car->getMake() << " Model: " << car->getModel() << " Color: " << car->getColor() << "\n";
  std::cout << "Meter Minutes: " << meter->getTimePurchased() << " Minutes Parked: " << car->getMinutesParked() << "\n";
  std::cout << "Fine: $" << fine << "\n";
}