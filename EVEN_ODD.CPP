#include <iostream>
using namespace std;

int main() 
{
  cout << "\n\nWelcome !!!\n\n\n";
  cout << " =====  Program to check whether the given number is Even or Odd ===== \n\n";
  
  int n;
  cout << "Enter an integer: ";
  cin >> n;

  if ( n % 2 == 0)
    cout << n << " is even.";
  else
    cout << n << " is odd.";

  return 0;
}