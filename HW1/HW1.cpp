/*
Programmer: Zachary Luevano

Instructor: Dr. Mellenthin

Description: This took way too long and it's 2AM as of finishing this, the way this works is fairly simple. a string is formated by the length of the word. This then goes through a while loop that if the letter inputed is equal to a letter in the word then it sets a bool to true and output a true or right if this wasn't kattis that is. Otherwise at the end it outputs a message through a variable that displays either a win or a lose. 
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