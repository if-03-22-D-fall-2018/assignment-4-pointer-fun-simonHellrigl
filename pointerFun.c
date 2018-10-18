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

void change_integers(int int_value, int* int_pointer)
{
  int_value = 66;
  int_pointer = &int_value;
}

void print_integers(int int_value, int* int_pointer){
  printf("Got an integer value %d and an address to an integer with value %d  \n ", int_value, *int_pointer );

}

int main(int argc, char const *argv[]) {

  int int_value;
  int *int_pointer;

  int_value = 55;
  // it is assigned as a normal int
  int_pointer = &int_value;
  // we assigne the pointer with & so we give it the adress of int_value if we want to get the value of int_pointer we have to use *
  printf("%d\n",int_value );
  printf("%d\n", *int_pointer );
  printf("\n");


  print_integers(int_value, int_pointer);
  change_integers(int_value, int_pointer);
  print_integers(int_value, int_pointer);






  return 0;
}
