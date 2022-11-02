/*
Programmer: Zachary Luevano

Instructor: Dr. Mellenthin

Description: if I forgot to ask what this does, it just uses a pointer to see if nPt is less than the point of nums with the sum of the value of NUMS at 0. The program called to rewrite it with a for loop and based off chapter V material you can rewrite a for loop to be a while true with the following format for(;;).
*/  

#include <iostream>
using namespace std;

int main()
{
const int NUMS = 5;

int nums[NUMS] = {16, 54, 7, 43, -5};
int total = 0, *nPt;

nPt = nums; // Store the address of nums[0] in nPt
cout << *nums + NUMS << endl;


// Using a while true statement for the for loop this is easily accomplished Chapter V
for (;nPt < nums + NUMS;)
    total += *nPt++;
    cout << total << endl;

cout << "The total of the array elements is " << total << endl;

return 0;
}