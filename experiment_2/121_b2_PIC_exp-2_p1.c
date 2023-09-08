/* Largest of three numbers using if - else if - else
   Name: Sushant M Nair;    Roll no: 121    Div: B,B2 */
#include<stdio.h>
int main()
{
   int num1, num2, num3;
   printf("Enter first number: \n");
   scanf("%d", &num1);
   printf("\nEnter second number: \n");
   scanf("%d", &num2);
   printf("\nEnter third number: \n");
   scanf("%d", &num3);
   if(num1>num2 && num1>num3)
   printf("The number %d is the largest of the three.", num1);
   else if(num2>num1 && num2>num3)
   printf("The number %d is the largest of the three.", num2);
   else
   printf("The number %d is the largest of the three.", num3);
}
