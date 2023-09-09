//Pattern 1:
#include<stdio.h>
int main()
{
    int totalrow, row, space, symbol;
    printf("Enter the total number of rows: ");
    scanf("%d", &totalrow);
    for(row = totalrow; row >= 1; row--)
    {
        //print the spaces
        for(space = 1; space <= totalrow - row; space++)
        printf(" ");
        //print the symbols
            for(symbol = 1; symbol <= (2*row) - 1; symbol++)
                printf("*");
                printf("\n");
    }
    return 0;
}
