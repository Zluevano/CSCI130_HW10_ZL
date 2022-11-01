#include <iostream>

using namespace std;

struct car{
  int carNum;
  int miles;
  int gallons;
};

int main()
{
int totalCars = 5;
car cars[totalCars];

for (int i = 0; i < totalCars; i++)
{
  cout << "Entry: " << i+1 << endl;
  
  cout << " Enter the car number: ";
  cin >> cars[i].carNum;
  cout << "\n Enter the miles gone.";
  cin >> cars[i].miles;
  cout << "\n Enter the gallons of gas used:";
  cin >> cars[i].gallons;  
  cout << endl;
}
double totalMPG = 0;

for (int i = 0; i < totalCars; i++)
  {
  double MPG = cars[i].miles / (double) cars[i].gallons;
  totalMPG = MPG+totalMPG;
  cout << "Car Number " << cars[i].carNum;
  cout << " Used " << MPG << " Miles Per Gallon." << endl;
  }
  cout << "Average Miles Per Gallon for Fleet: " << totalMPG/totalCars << endl;
}