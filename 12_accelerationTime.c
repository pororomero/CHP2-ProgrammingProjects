/*  Programmer: Harvey Labis Abiagador   Date completed: October 30, 2019
    Instructor: Ivy G. Nalam             Class: ITE 111 - GN1

    #12. JET FIGHTER ACCELERATON AND TIME SOLVER
    This program was based on Programming Projects that can be found in the book,
    PROBLEM SOLVING AND PROGRAM DESIGN IN C (Handly & Koffman, 7th ed), page 101, #12.

    created 30 October 2019
    by Harvey Labis Abiagador

    This code can be modified and reuse without author's permission.
      */

#include <stdio.h>

int main(void){

    double velocity, distance, convertedVelocity, time, acceleration;

    printf("JET FIGHTER ACCELERATON AND TIME SOLVER\n\n");
    printf("Enter jet's takeoff speed (km/hr): ");
    scanf("%lf", &velocity);
    printf("Enter distance from rest to takeoff (meter): ");
    scanf("%lf", &distance);

    /* Formulas: v = at , s = 0.5att -> s = 0.5vt */

    convertedVelocity = (velocity*1000.0)/3600.0; // converting to m/s
    time = distance/(0.5*convertedVelocity); // t = s/0.5v
    acceleration = convertedVelocity/time; // a = v/t

    printf("\n");
    printf("The jet's acceleration is %.2f m/s^2 and time is %.2f seconds.\n",
           acceleration, time);

    return 0;
}
