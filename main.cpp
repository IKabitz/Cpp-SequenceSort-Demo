/** @file main.cpp */
#include <iostream>
#include "classdef.h"

using namespace std;


int main() {

  /** User entered number */
  double num;

  /** User prompt */
  cout << "Please enter any amount of numbers, when you are done entering,"
       << " the program will give you a series of statistics about the"
       << " sequence of numbers you have just entered." << endl;

  sequenceHelper sort;

  /** This loop will run until the user answers with anything other than 'y' */
  cout << "Enter any amount of floating point numbers, one at a time" << endl
       << "Enter zero when you are finished";
  do {

  cin >> num;
  sort.sorter(num);

  }while(num);

  cout << endl;

  /** Displaying statistics */
  cout << "You entered: " << sort.getLength() << " numbers." << endl;
  cout << "The last number you entered was: " << sort.getLastNum() << endl;
  cout << "The sum of the numbers you entered was: " << sort.getSum() << endl;
  cout << "The mean of the numbers is: " << sort.getMean() << endl;
  cout << "The smallest number was: " << sort.getSmall() << endl;
  cout << "The largest number was: " << sort.getLarge() << endl;

  return 0;
}
