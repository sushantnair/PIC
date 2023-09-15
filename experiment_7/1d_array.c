#include<stdio.h>
int main()
{
    int i, j, size, key;
    printf("\nEnter the size of the array: ");
    scanf("%d", &size);
    int A[size];
    for(i = 0; i < size; i++)
    {
        printf("\nEnter element %d: ", i+1);
        scanf("%d", &A[i]);
    }
    for(i = 1; i < size; i++)
    {
        key = A[i];
        j = i - 1;
        while(j>=0 && A[j]>key)
        {
            A[j+1] = A[j];
            j--;
        }
        A[j+1] = key;
    }
    printf("The array sorted in ascending order is: ");
    for(i = 0; i < size; i++)
    {
        printf("\n%d", A[i]);
    }
    return 0;
}