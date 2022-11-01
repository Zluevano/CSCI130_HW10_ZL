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
  cout << endl << *(*(val +1) + 1);
  cout << endl << "Is true as the column size is specified.";
  return;
  
}
