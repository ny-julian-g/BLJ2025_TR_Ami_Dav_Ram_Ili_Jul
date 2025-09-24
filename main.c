#include <stdio.h>
#include "otheroperators.h"
#include "calc_08.h"
int grundrechner();
double exponential(double inputa,double inputb);
double calcsqrt(double inputa);
double faculty(double inputa);
int hello();
void main() {
 int choice = hello();
 switch (choice) {
  case 1:
   grundrechner();
 }
}