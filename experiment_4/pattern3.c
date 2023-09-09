//Pattern 3:
#include<stdio.h>
int main()
{
    int totalrow, spaces, symbols, row, num = 1;
    printf("No of rows: ");
    scanf("%d", &totalrow);
    for(row = 0; row < totalrow; row++)
    {
        //print spaces
        for(spaces = 1; spaces <= (totalrow-row); spaces++)
        printf("  ");
            //print numbers
            for(symbols = 0; symbols <= row; symbols++)
            {
                if(symbols == 0 || row == 0)
                    num = 1;
                else
                    num = num*(row - symbols + 1)/symbols;
                printf("%4d", num);
            }
            printf("\n");

    }
    return 0;
}
