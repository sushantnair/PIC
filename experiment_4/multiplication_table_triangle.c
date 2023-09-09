#include<stdio.h>
int main()
{
    int i, j, n, k;
    printf("Enter the number of rows of the Multipli-\ncation Table Half-triangle to be printed: ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++)
    {
        k = i;
        for(j = 1; j <= i; j++)
        {
            k = k*j;
            printf(" %d", k);
            k = i;
        }
        printf("\n");
    }
    return 0;
}
