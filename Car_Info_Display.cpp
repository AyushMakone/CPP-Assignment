#include <iostream>
#include <string>
using namespace std;

class car {
  public:
  // Properties
  string brand;
  string model;
  int year;

  // Function to display car info
  void displayinfo() {
    cout << "brand : " << brand << endl;
    cout << "model : " << model << endl;
    cout << "year : " << year << endl;
  }
};

int main() {
  // Create an object for car
  car car1;
  car1.brand = "Tesla";
  car1.model = "Model S";
  car1.year = 2020;

  // Create object for another car
  car car2;
  car2.brand = "BMW";
  car2.model = "M4";
  car2.year = 2018;

  // Create object for another car
  car car3;
  car3.brand = "Porsche";
  car3.model = "911 Turbo";
  car3.year = 2022;

  // Print attribute values
  cout << "car1 information : " << endl;
  car1.displayinfo();
  cout << endl; // for better readability
  
  cout << "car2 information : " << endl;
  car2.displayinfo(); 
  cout << endl; // for better readability
  
  cout << "car3 information : " << endl;
  car3.displayinfo();
  
  cout << endl;

  return 0;
}