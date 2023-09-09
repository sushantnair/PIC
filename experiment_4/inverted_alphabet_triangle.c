//Pattern 5:
#include<stdio.h>
int main()
{
    int i, j, n, ch;
    printf("\nEnter the number of rows of the\nInverted Alphabet Triangle to be printed: ");
    scanf("%d", &n);
    for(i = n; i >= 1; i--)
    {
        ch = 69;
        for(j = 1; j <= i; j++)
        {
            printf("%c", ch);
            ch--;
        }
        printf("\n");
    }
    return 0;
}

