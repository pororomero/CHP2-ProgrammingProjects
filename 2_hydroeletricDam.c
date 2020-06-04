/*  Programmer: Harvey Labis Abiagador   Date completed: October 30, 2019
    Instructor: Ivy G. Nalam             Class: ITE 111 - GN1

    #2. HYDROELECTRIC DAM DESIGN ASSISTANCE
    This program was based on Programming Projects that can be found in the book,
    PROBLEM SOLVING AND PROGRAM DESIGN IN C (Handly & Koffman, 7th ed), page 101, #2.

    created 30 October 2019
    by Harvey Labis Abiagador

    This code can be modified and reuse without author's permission.
      */

#include <stdio.h>

int main(void){

    const double G = 9.80;
    double height, cMeters, mass, work, actualWork, megawatts;

    printf("HYDROELECTRIC DAM DESIGN ASSISTANCE\n\n");
    printf("Enter height (in meter): ");
    scanf("%lf", &height);
    printf("Enter cubic meters of water: ");
    scanf("%lf", &cMeters);

    mass = cMeters*1000; // 1 cubic meter = 1000 kg
    work = mass*G*height;  // relevant formula
    actualWork = work*0.9; // only 90% of work is converted to electrical energy
    megawatts = actualWork/1000000.0; // converting to MW

    printf("\n");
    printf("The hydroelectric dam can produce %.2f MW of electrical energy.\n",
           megawatts);

    return 0;
}
