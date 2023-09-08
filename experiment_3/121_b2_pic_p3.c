/* 1.a. - Program to find area and circumference of various Geometric shapes.
Shape - Trapezoid; Input - Constant Values
Roll Number - 121; Batch - B2; Name - Sushant M Nair */
#include<stdio.h>
int main()
{
    double a, b, c, d, h;
    double aotr, potr;
    a = 2.0;
    b = 4.0;
    c = 3.0;
    d = 5.0;
    h = 2.5;
    aotr = 0.5*(a+b)*h;
    potr = a+b+c+d;
    printf("\nThe area of the trapezoid is %lf square centimetres", aotr);
    printf("\nThe perimeter of the trapezoid is %lf centimetres", potr);
    return 0;
}
