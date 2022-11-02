/*
Programmer: Zachary Luevano

Instructor: Dr. Mellenthin

Description: Still somewhat confused on how these exactly work but seeing how were not moving past them that's probaly okay. From what I understand the pointer is defaulted to [0][0] when using *(*val) and thus the first cout statement on the function goes to [0][0] = 33. *(*val + 1) specifies [0][1] or 16 in this case, the question B asks to determine if [1][2] is valid and indeed it is as the array is specified with a length of [2][3] which is the last position and in this case *(*(val +1) + 1) or [1][2] = 99.
*/  


#include <iostream>
const int ROWS = 2;
const int COLS = 3;
void arr(int [] [COLS]);

using namespace std; // didn't have this apperantly

int main()
{
int nums[ROWS][COLS] = { {33, 16, 29},
                         {54, 67, 99}};



cout << "Verifing placement" << endl;
cout << nums[1][2] << endl;
cout << endl;
  
cout << "Part A" << endl;
arr(nums);



return 0;
}


void arr(int (*val) [3])
{
  cout << endl << *(*val);
  cout << endl << *(*val + 1);
  cout << endl << *(*(val +1) + 2);
  cout << endl << *(*val) +1;
  cout << endl;
  cout << "\nPart B Below";
  cout << endl << *(*(val +1) + 2);
  cout << endl << "Is true as the column size is specified.";
  return;
  
}
