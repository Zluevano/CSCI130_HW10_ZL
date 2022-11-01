#include <iostream>
using namespace std;

int main()
{
const int NUMS = 5;

int nums[NUMS] = {16, 54, 7, 43, -5};
int total = 0, *nPt;

nPt = nums; // Store the address of nums[0] in nPt
cout << *nums + NUMS << endl;
  
while (nPt < nums + NUMS)
    total += *nPt++;
    cout << total << endl;

cout << "The total of teh array elements is " << total << endl;

return 0;
}