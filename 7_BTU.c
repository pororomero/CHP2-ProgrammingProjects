/*  Programmer: Harvey Labis Abiagador   Date completed: October 30, 2019
    Instructor: Ivy G. Nalam             Class: ITE 111 - GN1

    #7. HEAT CALCULATOR
    This program was based on Programming Projects that can be found in the book,
    PROBLEM SOLVING AND PROGRAM DESIGN IN C (Handly & Koffman, 7th ed), page 101, #7.

    created 30 October 2019
    by Harvey Labis Abiagador

    This code can be modified and reuse without author's permission.
      */

#include <stdio.h>

int main(void){

    double gallon, efficiency, heat, actualHeat;

    printf("HEAT CALCULATOR\n\n");
    printf("Enter number of gallons of oil: ");
    scanf("%lf", &gallon);
    printf("Enter efficiency value (0-100%): ");
    scanf("%lf", &efficiency);

    // 42 gallons = 5800000 BTU
    heat = gallon*(5800000.0/42.0);
    actualHeat = heat*(efficiency/100.0); // only efficiency will be generated to heat

    printf("\n");
    printf("%.2f BTU(s) of heat is delivered using %.2f gallon(s) \nwith %.2f percent efficiency.\n",
           actualHeat, gallon, efficiency);

    return 0;
}
