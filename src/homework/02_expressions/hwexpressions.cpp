#include "hwexpressions.h"
#include <iostream>

//example
//int add_numbers(int num1, int num2)
//{
//	return num1 + num2;
//}

//write function code here

//2: write function code, multiply tax_rate and meal_amount and return their product.
double get_sales_tax_amount(double meal_amount)
  {
    return meal_amount * (TAX_RATE / 100.0);
  }

//4: write function code to multiply  meal_amount and tip_rate, return their product.
double get_tip_amount(double meal_amount, double tip_rate)
  {
    return meal_amount * (tip_rate / 100.0);
  }

