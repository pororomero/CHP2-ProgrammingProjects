/*
    Programmer: Harvey Labis Abiagador   Date completed: October 30, 2019
    Instructor: Ivy G. Nalam             Class: ITE 111 - GN1

    #1. MILEAGE REIMBURSEMENT CALCULATOR
    This program was based on Programming Projects that can be found in the book,
    PROBLEM SOLVING AND PROGRAM DESIGN IN C (Handly & Koffman, 7th ed), page 101, #1.

    created 30 October 2019
    by Harvey Labis Abiagador

    This code can be modified and reuse without author's permission.
      */

#include <stdio.h>

int main(void){

    double beginReading, endReading, distTraveled, reimbursement;

    printf("MILEAGE REIMBURSEMENT CALCULATOR\n\n");
    printf("Enter beginning odometer reading=> ");
    scanf("%lf", &beginReading);
    printf("Enter ending odometer reading=> ");
    scanf("%lf", &endReading);

    distTraveled = endReading-beginReading;
    reimbursement = 0.35*distTraveled;    // rate is $0.35 per mile

    printf("\n");
    printf("You traveled %.2f miles. At $0.35 per mile, your reimbursement is $%.2f.\n",
           distTraveled, reimbursement);

    return 0;
}
