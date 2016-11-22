#include <iostream>
#include <cfloat>
using namespace std;

/** @file
 *
 * @author Ian Kabitz
 *
 * @date 1/20/2016
 *
 * @note implementation file for member functions. */

#include "classdef.h"

/** Accessor function definitions */
int sequenceHelper::getLength() const {
  return length;
}

double sequenceHelper::getLastNum() const {
  return lastNum;
}

double sequenceHelper::getSum() const {
  return sum;
}

double sequenceHelper::getMean() const {
  return mean;
}

double sequenceHelper::getSmall() const {
  return small;
}

double sequenceHelper::getLarge() const {
  return large;
}

/** Mutator function definitions */

 sequenceHelper::sequenceHelper() { // ctor
  length = 0;
  lastNum = 0;
  sum = 0;
  mean = 0;
  small = DBL_MAX;
  large = DBL_MIN;

}

void sequenceHelper::sorter(double num) {
  if(num){
  length++;

  lastNum = num;

  sum = (sum + num);

  mean = (sum / length);

  if(num < small)
    small = num;

  if(num > large)
    large = num;
  }
}
