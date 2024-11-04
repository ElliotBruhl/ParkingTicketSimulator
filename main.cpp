#include <iostream>
#include "parkedCar.hpp"
#include "parkingMeter.hpp"
#include "parkingTicket.hpp"
#include "policeOfficer.hpp"
using namespace std;

int main() {
  ParkedCar car1 = ParkedCar("Toyota", "Camry", "Silver", "ABC123", 60);
  ParkedCar car2 = ParkedCar("Honda", "Civic", "Red", "DEF456", 120);
  ParkedCar car3 = ParkedCar("Ford", "F-150", "Black", "GHI789", 180);

  PoliceOfficer officer1 = PoliceOfficer("John Smith", "B12345");
  PoliceOfficer officer2 = PoliceOfficer("Jane Doe", "C67890");
  PoliceOfficer officer3 = PoliceOfficer("Mark Smith", "D23456");

  ParkingMeter meter1 = ParkingMeter(60);
  ParkingMeter meter2 = ParkingMeter(0);
  ParkingMeter meter3 = ParkingMeter(120);

  if (officer1.needsTicket(&car1, &meter1))
    officer1.issueTicket(&car1, &meter1)->displayTicket();
  else
    cout << "No ticket needed." << endl;
  
  if (officer2.needsTicket(&car2, &meter2))
    officer2.issueTicket(&car2, &meter2)->displayTicket();
  else
    cout << "No ticket needed." << endl;
  
  if (officer3.needsTicket(&car3, &meter3))
    officer3.issueTicket(&car3, &meter3)->displayTicket();
  else
    cout << "No ticket needed." << endl;
      
  return 0;
}