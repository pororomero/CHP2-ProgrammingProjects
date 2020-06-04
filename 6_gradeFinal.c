/*  Programmer: Harvey Labis Abiagador   Date completed: October 30, 2019
    Instructor: Ivy G. Nalam             Class: ITE 111 - GN1

    #6. REQUIRED FINAL EXAM SCORE ESTIMATOR
    This program was based on Programming Projects that can be found in the book,
    PROBLEM SOLVING AND PROGRAM DESIGN IN C (Handly & Koffman, 7th ed), page 101, #6.

    created 30 October 2019
    by Harvey Labis Abiagador

    This code can be modified and reuse without author's permission.
      */

#include <stdio.h>

int main(void){

    int percentage;
    char grade;
    double minGrade, currentAve, score, gradeNeeded;

    printf("REQUIRED FINAL EXAM SCORE ESTIMATOR\n\n");
    printf("Enter desired grade> ");
    scanf("%c", &grade);
    printf("Enter minimum average require> ");
    scanf("%lf", &minGrade);
    printf("Enter current average in course> ");    //  grade in midterm
    scanf("%lf", &currentAve);
    printf("Enter how much the final counts \nas a percentage of the course grade> ");
    scanf("%d", &percentage);

    /* Based on the figures shown in the book, in the 75% part, he only got 60.85.
       79.5 * 2 = 159
       finalsGrade = 159-74.6 = 84.4
       94.20 out of 100 = 23.55 out of 25 , assuming that the perfect score is 100.
       84.4-23.55 = 60.85
        */
    gradeNeeded = (minGrade*2)-currentAve;
    score = (gradeNeeded-60.85)/(percentage/100.0);

    printf("\n");
    printf("You need a score of %.2f on the final to get a %c.\n",
           score, grade);

    return 0;
}
