//write include statements
#include "hwexpressions.h"
#include <iostream>

//write namespace using statement for cout
using std::cout;
using std::cin;

int main()
{
  double meal_amount;
  double tip_rate;
  double tip_amount;
  double tax_amount;
  double total;

  cout << "Enter the meal amount: $";
  cin >> meal_amount;

  tax_amount = get_sales_tax_amount(meal_amount);

  cout << "Enter the tip rate: $";
  cin >> tip_rate;

  tip_amount = get_tip_amount(meal_amount, tip_rate);

  total = meal_amount + tip_amount + tax_amount;

  cout << "\nReceipt:\n";
    cout << "Meal Amount:     $" << meal_amount << std::endl;
    cout << "Sales Tax:       $" << tax_amount << std::endl;
    cout << "Tip Amount:      $" << tip_amount << std::endl;
    cout << "Total:           $" << total << std::endl;

  return 0;
}
