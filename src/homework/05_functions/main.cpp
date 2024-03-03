#include "func.h"
#include <iostream>

int main() 
{
  int choice;

  do {
    std::cout << "---- menu ---- \n";
    std::cout << "1 GC content\n";
    std::cout << "2 DNA complement\n";
    std::cout << "3 exit\n";

    std::cout << "enter choice: ";
    std::cin >> choice;

    switch (choice) {
      case 1: {
        std::string dna;
        std::cout << "enter dna string: ";
        std::cin >> dna;
        std::cout << "gc content: " << get_gc_content(dna) << "% \n";
        break;
      }

      case 2: {
          std::string dna;
          std::cout << "enter dna string: ";
          std::cin >> dna;
          std::cout << "dna complement: " << get_dna_complement(dna) << "\n";
          break;
        }

      case 3: {
          char confirm;
          std::cout << "are you sure you want to exit? (y/n): ";
          std::cin >> confirm;
          if (confirm == 'y'|| confirm == 'Y') {
            std::cout << "\nbye bye!!\n";
            return 0;
          }
          else {
            choice = 0;
            std::cout << "\nthen why'd you pick 3 :( \n";
          }
          break;
        }
      default:
          std::cout << "invalid choice :(\n";
          break;
    }
  }
  while (choice != 3);
  return 0;
}
