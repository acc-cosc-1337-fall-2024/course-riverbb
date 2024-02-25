/*
In file  src/homework/04_repetition /repetition .cpp, write the function code for the factorial and gcd functions using a loop of your choice. Do not use a recursive solution to solve this problem.
*/

//add include statements
#include "repetition.h"
#include <iostream>

//add function(s) code here
int factorial(int num)
{
  int sum = 1;
  while (num > 0) {
    sum *= num;
    num--;
  }
  return sum;
}



int gcd(int num1, int num2)
{
  while (num1 != num2) {
    if (num1 < num2){
      std::swap(num1, num2);
    }
    if (num1 > num2) {
      num1 -= num2;
    }
  }
  return num1;
}
