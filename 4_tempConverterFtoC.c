/*  Programmer: Harvey Labis Abiagador   Date completed: October 30, 2019
    Instructor: Ivy G. Nalam             Class: ITE 111 - GN1

    #4. DEGRESS FAHRENHEIT TO DEGREES CELSIUS CONVERTER
    This program was based on Programming Projects that can be found in the book,
    PROBLEM SOLVING AND PROGRAM DESIGN IN C (Handly & Koffman, 7th ed), page 101, #4.

    created 30 October 2019
    by Harvey Labis Abiagador

    This code can be modified and reuse without author's permission.
      */

#include <stdio.h>

int main(void){

    int fahrenheit;
    double celsius;

    printf("DEGRESS FAHRENHEIT TO DEGREES CELSIUS CONVERTER\n\n");
    printf("Enter the temperature in Fahrenheit: ");
    scanf("%d", &fahrenheit);

    celsius = (5.0/9.0)*(fahrenheit-32); // relevant formula

    printf("\n");
    printf("%d degrees Fahrenheit = %.2f degrees Celsius\n",
           fahrenheit, celsius);

    return 0;
}
