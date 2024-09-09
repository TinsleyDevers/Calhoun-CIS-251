//
// Program Assignment #2
//
// Created by Tinsley Devers on 09.08.2024
// https://github.com/TinsleyDevers
//
// This program calculates the total cost of five items, the sales tax, and the total cost of the purchase.
//

#include <iostream>
using namespace std;


// Main function
int main()
{

  // Declares variables and calculates the costs
  double item1 = 15.95;
  double item2 = 24.95;
  double item3 = 6.95;
  double item4 = 12.95;
  double item5 = 3.95;
  double subtotal = item1 + item2 + item3 + item4 + item5;
  double tax = subtotal * 0.07;
  double total = subtotal + tax;

  // Prints the total cost of the five items, the sales tax, and the total cost of the entire purchase
  cout << "Item 1: $" << item1 << endl;
  cout << "Item 2: $" << item2 << endl;
  cout << "Item 3: $" << item3 << endl;
  cout << "Item 4: $" << item4 << endl;
  cout << "Item 5: $" << item5 << endl;
  cout << "Subtotal: $" << subtotal << endl;
  cout << "Tax: $" << tax << endl;
  cout << "Total: $" << total << endl;

  // Stops the application from instantly closing
  system("pause");

  // Ends the program
  return 0;
}