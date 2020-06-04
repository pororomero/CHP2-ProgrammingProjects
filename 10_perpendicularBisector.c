/*  Programmer: Harvey Labis Abiagador   Date completed: October 30, 2019
    Instructor: Ivy G. Nalam             Class: ITE 111 - GN1

    #10. PERPENDICULAR BISECTOR EQUATION SOLVER
    This program was based on Programming Projects that can be found in the book,
    PROBLEM SOLVING AND PROGRAM DESIGN IN C (Handly & Koffman, 7th ed), page 101, #10.

    created 30 October 2019
    by Harvey Labis Abiagador

    PS:
    THIS CODE WILL NOT WORK IF ysub1 = ysub2. This makes the slopePB undefined. Examples is ysub1 = ysub2 = 2.
    Therefore, avoid same value for ysub1 and ysub2.

    This code can be modified and reuse without author's permission.
      */

#include <stdio.h>

int main(void){

    double xsub1, ysub1, xsub2, ysub2, xMid, yMid;
    double slopeLS, slopePB, yIntercept;

    printf("PERPENDICULAR BISECTOR EQUATION SOLVER\n\n");
    printf("Enter x-coordinate of first point - x1: ");
    scanf("%lf", &xsub1);
    printf("Enter y-coordinate of first point - y1: ");
    scanf("%lf", &ysub1);
    printf("Enter x-coordinate of second point - x2: ");
    scanf("%lf", &xsub2);
    printf("Enter y-coordinate of second point - y2: ");
    scanf("%lf", &ysub2);

    slopeLS = (ysub2-ysub1)/(xsub2-xsub1);  // slope of line segment
    xMid = (xsub1+xsub2)/2.0; // x-coordinate of midpoint
    yMid = (ysub1+ysub2)/2.0; // y-coordinate of midpoint
    slopePB = (-1.0/slopeLS);  // slope of perpendicular bisector
    yIntercept = yMid-(slopePB*xMid);   // formula shown in the book

    printf("\n");
    printf("The original two points are: A(%.1f, %.1f) and B(%.1f, %.1f)\n",
           xsub1, ysub1, xsub2, ysub2);
    printf("The equation of perpendicular bisector is: y = %.1fx + %.2f\n", slopePB, yIntercept);


    return 0;
}
