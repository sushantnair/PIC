/* Largest of three numbers using Ternary operator
   Name: Sushant M Nair;    Roll no: 121    Div: B,B2 */
#include<stdio.h>
int main()
{
   int num1, num2, num3, max = 0;
   printf("Enter first number: \n");
   scanf("%d", &num1);
   printf("\nEnter second number: \n");
   scanf("%d", &num2);
   printf("\nEnter third number: \n");
   scanf("%d", &num3);
   max = (num1>num2 && num1>num3) ? printf("The number %d is largest", num1) : (num2>num3) ? printf("The number %d is largest", num2) : printf("The number %d is largest", num3);
}
