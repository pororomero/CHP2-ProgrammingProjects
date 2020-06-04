/*  Programmer: Harvey Labis Abiagador   Date completed: October 30, 2019
    Instructor: Ivy G. Nalam             Class: ITE 111 - GN1

    #11. PYTHAGOREAN TRIPLE SOLVER
    This program was based on Programming Projects that can be found in the book,
    PROBLEM SOLVING AND PROGRAM DESIGN IN C (Handly & Koffman, 7th ed), page 101, #11.

    created 30 October 2019
    by Harvey Labis Abiagador

    This code can be modified and reuse without author's permission.
      */

#include <stdio.h>

int main(void){

    int m, n, side1, side2, hypotenuse;

    printf("PYTHAGOREAN TRIPLE SOLVER\n\n");
    printf("Enter m: ");
    scanf("%d", &m);
    printf("Enter n: ");
    scanf("%d", &n);

    side1 = (m*m)-(n*n);
    side2 = 2*m*n;
    hypotenuse = (m*m)+(n*n);

    printf("\n");
    printf("The Pythagorean triple is %d, %d, %d.\nside1 = %d, side2 = %d, hypotenuse = %d.\n",
           side1, side2, hypotenuse, side1, side2, hypotenuse);


    return 0;
}
