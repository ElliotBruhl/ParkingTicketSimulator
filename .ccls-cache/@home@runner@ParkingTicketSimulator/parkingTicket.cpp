#include "parkingTicket.hpp"

ParkingTicket::ParkingTicket(ParkedCar* car, ParkingMeter* meter, PoliceOfficer* officer) {
  this->car = car;
  this->meter = meter;
  this->officer = officer;
}
void ParkingTicket::displayTicket() {
  int fine = 25 + ((car->getMinutesParked() - meter->getTimePurchased()) / 60 - 1)*10;
  std::cout << "*** Parking Ticket ***\n";
  std::cout << "Officer " << officer->getName() << " Badge Number " << officer->getBadgeNum() << "\n";
  std::cout << "Vehicle Licence Number: " << car->getLicenseNum() << "\n";
  std::cout << "Make: " << car->getMake() << " Model: " << car->getModel() << " Color: " << car->getColor() << "\n";
  std::cout << "Meter Minutes: " << meter->getTimePurchased() << " Minutes Parked: " << car->getMinutesParked() << "\n";
  std::cout << "Fine: $" << fine << "\n";
}