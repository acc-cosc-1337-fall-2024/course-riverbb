// 4. Create a menu as follows  (do no use loops, the program runs one time):

//        MAIN MENU

// 1-Letter grade using if
// 2-Letter grade using switch
// 3-Exit

// 5. capture a number from keyboard and call functions get_letter_grade_using_if and get_letter_grade_using_switch to display the letter grade to screen.


//write include statements

#include <iostream>
#include "decisions.h"

  int main() {
      int choice;
      int grade;

      // main menu
      std::cout << "MAIN MENU\n";
      std::cout << "1 - letter grade using if\n";
      std::cout << "2 - letter grade using switch\n";
      std::cout << "3 - exit\n";

      // choice
      std::cout << "enter your choice: ";
      std::cin >> choice;

      switch (choice) {
          case 1:
              std::cout << "enter numerical grade: ";
              std::cin >> grade;
              if (grade >= 0 && grade <= 100) {
                  std::cout << "letter grade using if: " << get_letter_grade_using_if(grade) << std::endl;
              } 
              else {
                  std::cout << "bro what is that. enter a number between 0 and 100.\n";
              }
              break;

          case 2:
              std::cout << "enter numerical grade: ";
              std::cin >> grade;
              if (grade >= 0 && grade <= 100) {
                  std::cout << "letter grade using switch: " << get_letter_grade_using_switch(grade) << std::endl;
              } 
              else {
                  std::cout << "??? Please enter a number between 0 and 100.\n";
              }
              break;

          case 3:
              std::cout << "bye bye!!\n";
              break;

          default:
              std::cout << "1, 2, or 3. please. i'm begging you.\n";
      }

      return 0;
  }
