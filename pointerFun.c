/*----------------------------------------------------------
 *				HTBLA-Leonding / Class: 2DHIF
 * ---------------------------------------------------------
 * Exercise Number: 4
 * Title:			pointerFun
 * Author:    Simon Hellrigl
 * ----------------------------------------------------------
 * Description:
 * Calculates a pyramid of numbers, i.e., it multiplies a big
 * integer by the number 2, its result by 3, etc. and then
 * returns to the original value by subsequently dividing,
 * again starting by 2, 3, etc.
 * ----------------------------------------------------------
 */
#include <stdio.h>


void print_integers(int int_value, int* int_pointer){
  printf("Got an integer value %d and an address to an integer with value %d  \n ", int_value, *int_pointer );

}

int main(int argc, char const *argv[]) {

  int int_value;
  int *int_pointer;

  int_value = 55;
  int_pointer = &int_value;

  print_integers(int_value, int_pointer);
//  printf("%d\n",int_value );
  //printf("%s\n", &int_pointer );






  return 0;
}
