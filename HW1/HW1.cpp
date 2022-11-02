/*
Programmer: Zachary Luevano

Instructor: Dr. Mellenthin

Description: Kattis is not treating me well this time, I'm really close on this I have another HW1 in here but this seems to be a closer approach. It does work as far as I can see with every case you could think of it even passes the first test case I just can't figure out why it wont work.
*/  

#include <iostream>
#include <vector>

using namespace std;

void end(string answer, string word);

int main()
{
string word;  //="Test";
cin >> word;

int miss = 0;
int add = 0;
bool guess = false;
char letter;


string answer (word.length(), '_');
string result;
  
  
while (answer != word && miss < 10)
  {
  //cout << miss << endl;
  cin >> letter;

    for (int i = 0; i< word.length(); i++)
      {
        if (letter == word[i])
        {
          answer[i] = letter;
          guess = true;
        }       
      }
    
      if(guess)
      {
     // cout << "Right" << endl;
      }
      else
      {
     //    cout << "Wrong" << endl;
          miss++;
      }
      guess = false; 
  }

end(answer,word);
return 0;
  }


void end(string answer, string word)
{
  if(answer==word)
  {
    cout<<"WIN" << endl;
  }
  else
  {
    cout<<"LOSE" << endl;
  }
}