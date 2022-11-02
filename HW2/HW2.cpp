

#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstring>
#include <string>

using namespace std;

int main()
{

//cout << "Enter the month day and year." << endl;
for (int i = 0; i < 1000; i++){
string month;
int day;
int year;
double hour = 60;
int riseH, riseM;
int fallH, fallM;
char C;




cin >> month;
cin >> day;
cin >> year;

//cout << "Enter the time of the rise." << endl;
cin >> riseH >> C >> riseM;

//cout <<"Enter the time of the fall." << endl;
//cin >> fallH >> C >> fallM;
cin >> fallH >> C >> fallM;


int calcT;
calcT = ((fallH - riseH) % 24);
if (calcT == 24)
  calcT = 0;
else
calcT = calcT;
  
int calcM;
calcM = (fallM - riseM) % 60;
  if (calcM < 0)
  {
    calcT--;
    calcM = calcM + 60;
  }
  
cout << month << " " << day << " " << year
     << " " << calcT << " hours " << calcM << " minutes" << endl;
    }

}