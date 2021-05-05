//Simple recursion program
//Teacher: Dr. Tyson McMillan
//Student: Ronald Angora
//Date: 05/03/2021

#include <iostream>
#include "Input_Validation_Extended.h"
using namespace std;

//Tower of Hanoi Function
void towerOfHanoi(int n, char from_rod, char to_rod, char aux_rod)
{
  
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
  int num = 0;
  cout << "Enter a number: ";
  num = validateInt(num);
  cout << "Factorial of entered number: " << factorialR(num);
   
  return 0;
}