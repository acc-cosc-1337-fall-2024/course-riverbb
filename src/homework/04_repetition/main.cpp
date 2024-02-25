/*
Create the following menu:

Use a do-while loop to create the menu

1-Factorial
2-Greatest Common Divisor
3-Exit

If user selects 3, prompt the user for confirmation (are you sure you want to exit?).
*/

//write include statements
#include "repetition.h"
#include <iostream>

//write using statements

int main() 
{
  int choice;

  do {
    // menu
    std::cout << "---- menu ---- \n";
    std::cout << "1 factorial\n";
    std::cout << "2 GCD\n";
    std::cout << "3 exit\n";

    std::cout << "enter choice: ";
    std::cin >> choice;

    switch (choice) {
      case 1: {
        int num;
        std::cout << "enter number for factorial: ";
        std::cin >> num;
        int result = factorial(num);
        std::cout << "factorial of " << num << " is " << result << std::endl;
        break;
      }
      case 2: {
        int num1, num2;
        std::cout << "enter first number for GCD: ";
        std::cin >> num1;
        std::cout << "enter second number for GCD: ";
        std::cin >> num2;
        int result = gcd(num1, num2);
        std::cout << "GCD of " << num1 << " and " << num2 << " is " << result << std::endl;
        break;
      }
      case 3:{
        char confirm;
        std::cout << "are you sure you want to exit? (y/n): ";
        std::cin >> confirm;
        if (confirm == 'y' || confirm == 'Y') {
          std::cout << "\nbye bye!!\n";
          return 0;
        }
        else {
          choice = 0;
          std::cout << "\nthen why'd you pick 3 :( \n \n";
        }
        break;
      }
      default: 
        std::cout << "invalid choice :( \n";
        break;
    }
  } 
  while (choice != 3);
  return 0;
}
