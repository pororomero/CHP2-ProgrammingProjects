/*  Programmer: Harvey Labis Abiagador   Date completed: October 30, 2019
    Instructor: Ivy G. Nalam             Class: ITE 111 - GN1

    #3. ESTIMATES TEMPERATURE AFTER T HOURS
    This program was based on Programming Projects that can be found in the book,
    PROBLEM SOLVING AND PROGRAM DESIGN IN C (Handly & Koffman, 7th ed), page 101, #3.

    created 30 October 2019
    by Harvey Labis Abiagador

    This code can be modified and reuse without author's permission.
      */

#include <stdio.h>

int main(void){

    int hours, minutes;
    double temperature, time;

    printf("ESTIMATES TEMPERATURE AFTER T HOURS\n\n");
    printf("Enter how long since the start of power failure. \n");
    printf("HOUR(S): ");
    scanf("%d", &hours);
    printf("MINUTE(S): ");
    scanf("%d", &minutes);

    time = hours+(minutes/60.0); // converting time into decimal form
    temperature = ((4*(time*time))/(time+2))-20; // based on function given

    printf("\n");
    printf("The temperature after %.1f hours is %.2f degrees Celsius.\n",
           time, temperature);

    return 0;
}
