#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

string addToPassword(int numCharacters, string charList) {
  string password = "";
   for (int i = 0; i < numCharacters; i++) {
    int randomIndex = rand() % charList.length();
    password.push_back(charList[randomIndex]);
  };
  return password;
}

int main() {
  string UPPERCASE_CHARS = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  string LOWERCASE_CHARS = "abcdefghijklmnopqrstuvwxyz";
  string NUMBER_CHARS = "123456789";
  string SPECIAL_CHARS = "!@#$%^&*_-";

  int NUM_CHARS = 3; 
  string PASSWORD = "";

  srand(time(NULL));

  PASSWORD += addToPassword(NUM_CHARS, UPPERCASE_CHARS);
  PASSWORD += addToPassword(NUM_CHARS, LOWERCASE_CHARS);
  PASSWORD += addToPassword(NUM_CHARS, NUMBER_CHARS);
  PASSWORD += addToPassword(NUM_CHARS, SPECIAL_CHARS);
  cout << PASSWORD;
  
  return 0;
}
