//Pattern 2:
#include<stdio.h>
int main()
{
    int totalrow, row, space, symbol;
    int m, r_n;
    printf("Enter the total number of rows: ");
    scanf("%d", &totalrow); // totalrows = 9
    m = totalrow/2 + 1; //mid m = 9/2 + 1 = 5
    r_n = totalrow - m; //rows after mid, r_n = 9 - 5 = 4
    for(row = 1; row <= m; row++) //ascending upto mid
    {
        for(space = 1; space <= (m - row); space++)
        printf(" ");
            for(symbol = 1; symbol <= (2*row - 1); symbol++)
            printf("*");
            printf("\n");
    }
    for(row = r_n; row >= 1; row--)
    {
        for(space = 0; space <= (r_n - row); space++)
        printf(" ");
            for(symbol = 1; symbol <= (2*row - 1); symbol++)
            printf("*");
            printf("\n");
    }
    return 0;
}
