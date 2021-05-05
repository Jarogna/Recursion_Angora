//Simple recursion program
//Teacher: Dr. Tyson McMillan
//Student: Ronald Angora
//Date: 05/03/2021

#include <iostream>
#include "Input_Validation_Extended.h"
using namespace std;

//Tower of Hanoi Function
void towerOfHanoi(int n, char rod1, char rod2, char rod3)
{
  if (n == 1)
  {
    cout << "Move disk 1 from rod " << rod1 << " to rod " << rod2 << endl;
    
    return;
  }

  towerOfHanoi(n - 1, rod1, rod3, rod2);
  cout << "Move disk " << n << " from rod " << rod1 << " to rod " << rod2 << endl;

  towerOfHanoi(n - 1, rod3, rod2, rod1);  
}

//Factorial Function
int factorialR(int n)
{
  if (n <= 1)
    return 1;
  else 
    return n*factorialR(n-1);
}

int main()
{
  int n = 4; //Number of disks
  int num = 0;

  towerOfHanoi(n, 'A', 'C', 'B'); // A, B and C are rod names.
  cout << "\nEnter a number: ";
  num = validateInt(num);
  cout << "Factorial of entered number: " << factorialR(num);
   
  return 0;
}