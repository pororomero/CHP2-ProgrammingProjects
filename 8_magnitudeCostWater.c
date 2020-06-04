/*  Programmer: Harvey Labis Abiagador   Date completed: October 30, 2019
    Instructor: Ivy G. Nalam             Class: ITE 111 - GN1

    #8. MAGNITUDE AND COST OF WATER SOLVER
    This program was based on Programming Projects that can be found in the book,
    PROBLEM SOLVING AND PROGRAM DESIGN IN C (Handly & Koffman, 7th ed), page 101, #8.

    created 30 October 2019
    by Harvey Labis Abiagador

    This code can be modified and reuse without author's permission.
      */

#include <stdio.h>

int main(void){

    const double unitCostWater = 0.02852; // converted to liter, assuming this value, based on Manila Water.
    int population;
    double oldsMagnitude, newsMagnitude, saveMagnitude, costOfWater;

    printf("MAGNITUDE AND COST OF WATER SOLVER\n\n");
    printf("Enter the community's population: ");
    scanf("%d", &population);

    // old: 15 liters/1 flush * 14 flush/1 day = 3 persons
    // new:  2 liters/1 flush * 14 flush/1 day = 3 persons

    oldsMagnitude = (population/3.0)*(210.0); // 15*14 = 210
    newsMagnitude = (population/3.0)*(28.0);  // 2*14 = 28
    saveMagnitude = oldsMagnitude-newsMagnitude; //
    costOfWater = saveMagnitude*unitCostWater;

    printf("\n");
    printf("The community (N=%d) can save %.2f L/day \nand %.2f pesos with the new toilet.\n",
           population, saveMagnitude, costOfWater);


    return 0;
}
