/*Q54: Write a program to print the following pattern:

   *
  ***
 *****
*******
 *****
  ***
   *
*/

#include <stdio.h>

int main() {
   int row, spaces, star_count, i;

   for (row = 1; row <= 7; row++) {
      if (row <= 4) {
         spaces = 4 - row;
         star_count = 2 * row - 1;
      } else {
         spaces = row - 4;
         star_count = 2 * (8 - row) - 1;
      }

      for (i = 1; i <= spaces; i++) {
         printf(" ");
      }

      for (i = 1; i <= star_count; i++) {
         printf("*");
      }

      printf("\n");
   }

   return 0;
}