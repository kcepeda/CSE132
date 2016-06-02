/* 
 * manipFunctions.c
 * 
 * This source file defines all the functions used to bit manipulate
 *
 */

#include "manipFunctions.h"


int hasAOne(int num) {
  return num && 1 ;

// both numbers are not zero

}

int hasAZero(int num) {
  return (( !num) || (~num)) ;
}

int leastSigHasAOne(int num) {
  return(( num & 255) && 1) ;
// There is a 1 somewhere in the last 8 digits
}

int negate(int num) {
  return ( ~num+1);
}

int isNegativeInt(int num) {
  return (num>>31 & 1);
}

int isNegativeLong(long num) {
 
 return (num>>63 & 1);
}

int isNegativeChar(char num) {
  return (num >> 7 & 1);
}