#include <iostream> 
using namespace std;

int main()
{
  int number, sum; 
  sum = 0;
  number = 0;

  /* read the first number */
  cout << "Enter the number (0 finishes the sequence): ";
  cin >> number; 

  while (number != 0){
    sum = sum + number; 
    cout << "Enter another number (0 finishes the sequence): ";
    cin >> number;
  }

  cout << "The sum of the numbers is " << sum << endl;
  return (0);
}


