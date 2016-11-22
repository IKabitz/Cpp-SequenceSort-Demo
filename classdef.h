 /** @file
 *
 * @author Ian Kabitz
 *
 * @date 1/19/2016
 *
 * @note Project One Header code --- */

#ifndef _SEQUENCEHELPER
#define _SEQUENCEHELPER

/** @class sequenceHelper */
class sequenceHelper {

 public:

 // Accessors

  /** Accessor to the length datamember
   *
   * @pre must have initialized large
   *
   * @return returns sequence length */
  int getLength() const;

  /** Accessor to the lastNum datamember
   *
   * @pre must have initialized lastNum
   *
   * @return returns last number entered */
  double getLastNum() const;

  /** Accessor to the sum datamember
   *
   * @pre must have initialized sum
   *
   * @return returns sum of all numbers entered */
  double getSum() const;

  /** Accessor to mean datamember
   *
   * @pre must have initialized mean
   *
   * @return returns mean of all numbers entered */
  double getMean() const;

  /** Accessor to small datamember
   *
   * @pre must have small initialized
   *
   * @return returns smallest number entered */
  double getSmall() const;

  /**  Accessor to large datamember
   *
   * @pre Must have initialized large
   *
   * @return returns largest number entered */
  double getLarge() const;

  /** Mutators */

  /** Default ctor
   *
   * @post intializes datamembers to default values */
   sequenceHelper();

  /** Generates values for all the datamembers
   *
   * Initializes the sum, length, last number, mean, small and large
   * members.
   *
   * @pre must have default ctor run
   *
   * @post Sorts numbers entered into retrievable statistics
   *
   * @param num is the number entered by the user
   *
   * @return none. */
  void sorter(double num);
 private:

  /** Length of the whole sequence. */
  int length;

  /** Last number entered. */
  double lastNum;

  /** Summation of all numbers in sequence. */
  double sum;

  /** Arithmetic mean of all numbers in sequence. */
  double mean;

  /** Smallest number entered. */
  double small;

  /** Largest number entered. */
  double large;

};

#endif
