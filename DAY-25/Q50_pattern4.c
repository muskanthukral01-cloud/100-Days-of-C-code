/*Q50: Write a program to print the following pattern:
*****
 ****
  ***
   **
    *

*/

#include <stdio.h>

int main() {
    int row, column;

    for (row = 1; row <= 5; row++) {
        for (column = 1; column < row; column++) {
            printf(" ");
        }

        for (column = row; column <= 5; column++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}