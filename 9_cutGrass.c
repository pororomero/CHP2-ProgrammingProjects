/*  Programmer: Harvey Labis Abiagador   Date completed: October 30, 2019
    Instructor: Ivy G. Nalam             Class: ITE 111 - GN1

    #9. TIME REQUIRED TO CUT GRASS
    This program was based on Programming Projects that can be found in the book,
    PROBLEM SOLVING AND PROGRAM DESIGN IN C (Handly & Koffman, 7th ed), page 101, #9.

    created 30 October 2019
    by Harvey Labis Abiagador

    This code can be modified and reuse without author's permission.
      */

#include <stdio.h>

int main(void){

    double yardLength, yardWidth, houseLength, houseWidth;
    double areaYard, areaHouse, rate, grassLand, time;

    printf("TIME REQUIRED TO CUT GRASS\n\n");
    printf("Enter length of rectangular yard (ft.): ");
    scanf("%lf", &yardLength);
    printf("Enter width of rectangular yard (ft.): ");
    scanf("%lf", &yardWidth);
    printf("Enter length of rectangular house (ft.): ");
    scanf("%lf", &houseLength);
    printf("Enter width of rectangular house (ft.): ");
    scanf("%lf", &houseWidth);

    areaYard = yardLength*yardWidth;
    areaHouse = houseLength*houseWidth;
    grassLand = areaYard-areaHouse;
    time = grassLand/2.0;   // rate = 2 ft^2 per second

    printf("\n");
    printf("The time required is %.f seconds.\n", time);


    return 0;
}
