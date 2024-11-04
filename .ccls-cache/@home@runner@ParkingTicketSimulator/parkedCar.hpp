#ifndef PARKEDCAR_HPP
#define PARKEDCAR_HPP
#include <string>
using namespace std;

class ParkedCar {
private:
  string make;
  string model;
  string color;
  string licenseNum;
  int minutesParked;
public:
  //pre: make, model, color, licenseNum, and minutesParked are valid values. post: a ParkedCar object is created with the given values.
  ParkedCar(string mk, string md, string c, string ln, int mp) { 
    make = mk;
    model = md;
    color = c;
    licenseNum = ln;
    minutesParked = mp;
  }
  //pre: none. post: returns the make of the car.
  string getMake() { 
    return make;
  }
  //pre: none. post: returns the model of the car.
  string getModel() { 
    return model;
  }
  //pre: none. post: returns the color of the car.
  string getColor() { 
    return color;
  }
  //pre: none. post: returns the license number of the car.
  string getLicenseNum() { 
    return licenseNum;
  }
  //pre: none. post: returns the number of minutes the car has been parked.
  int getMinutesParked() { 
    return minutesParked;
  }
};
#endif