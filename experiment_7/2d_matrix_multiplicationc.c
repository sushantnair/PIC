#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i, j, k;
    int p, q, r;
    system("cls");
    printf("\nEnter the order of matrix A (i by j): ");
    scanf("%d", &i);
    scanf("%d", &j);
    printf("\nEnter the order of matrix B (j by k): ");
    scanf("%d", &k);
    int matA[i][j];
    int matB[j][k];
    int matMulti[i][k];
    printf("\nEnter the elements of matrix A:");
    for(p= 0; p < i; p++)
    {
        for(q = 0; q < j; q++)
        {
            printf("\nElement at position [%d][%d] is: ", p, q);
            scanf("%d", &matA[p][q]);
        }
    }
    printf("\nEnter the elements of matrix B:");
    for(q = 0; q < j; q++)
    {
        for(r = 0; r < k; r++)
        {
            printf("\nElement at position [%d][%d] is: ", q, r);
            scanf("%d", &matB[q][r]);
        }
    }
    for(p = 0; p < i; p++)
    {
        for(r = 0; r < k; r++)
        {
            matMulti[p][r] = 0;
            for(q = 0; q < j; q++)
            {
                matMulti[p][r] += matA[p][q]*matB[q][r];
            }
           printf("\n[%d][%d]: %d", p, r, matMulti[p][r]);
        }
    }
}
