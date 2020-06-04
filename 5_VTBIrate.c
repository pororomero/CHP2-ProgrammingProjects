/*  Programmer: Harvey Labis Abiagador   Date completed: October 30, 2019
    Instructor: Ivy G. Nalam             Class: ITE 111 - GN1

    #5. VTBI AND RATE SOLVER
    This program was based on Programming Projects that can be found in the book,
    PROBLEM SOLVING AND PROGRAM DESIGN IN C (Handly & Koffman, 7th ed), page 101, #5.

    created 30 October 2019
    by Harvey Labis Abiagador

    This code can be modified and reuse without author's permission.
      */

#include <stdio.h>

int main(void){

    int minutes;
    double volume, rate;

    printf("VTBI AND RATE SOLVER\n\n");
    printf("Volume to be infused (ml) => ");
    scanf("%lf", &volume);
    printf("Minutes over which to infuse => ");
    scanf("%d", &minutes);

    rate = volume*(60.0/minutes); // rate = volume * n minutes in 1hr

    printf("\n");       // print a newline for design purpose only
    printf("VTBI: %.2f ml\n", volume);
    printf("Rate: %.2f ml/hr\n", rate);


    return 0;
}
