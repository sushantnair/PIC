//Pattern 4:
#include<stdio.h>
int main()
{
    int i, j, n, k;
    k = 1;
    printf("Enter the number of rows of the\nFloyd's triangle to be printed:");
    scanf("%d", &n);
    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= i; j++)
        {
            printf(" %d", k);
            k++;
        }
        printf("\n");
    }
    return 0;
}
