  //
  // Program Assignment #1
  // Taken from Starting Out With C++ from Control Structures through Objects (Ninth Edition) by Tony Gaddis (2018)
  //
  // Created by Tinsley Devers on 08.26.2024
  // https://github.com/TinsleyDevers
  //
  // This program calculates the user's pay.

  #include <iostream>
  using namespace std;

  int main()
  {
    // Declares variables
    double hours, rate, pay;

    // Get the number of hours worked.
    cout << "How many hours did you work? ";
    cin >> hours;

    // Get the hourly rate
    cout << "How much do you get paid per hour? ";
    cin >> rate;

    // Calculate the pay.
    pay = hours * rate;

    // Display the pay
    cout << "You have earned $" << pay << endl;
    return 0;
  }