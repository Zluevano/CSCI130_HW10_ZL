/*
Programmer: Zachary Luevano

Instructor: Dr. Mellenthin

Description: Kattis problem I could only get the first instance to pass if I let the loop = to 4 which is the given first test case. My problem was ending the program when a '\n' was entered, no matter what I tried I just couldn't get it to run right with the given code.

The program does what it needs to however, you enter a month day and year and then two times in proper format which the program then finds the gap of time in between it.
*/  

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