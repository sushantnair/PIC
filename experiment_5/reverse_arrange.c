#include<stdio.h>
int main()
{
    int i, n, num[100], temp_num[100];
    printf(“Enter the number of elements\nto construct an array: “);
    scanf(“%d”, &n);
    for(i = 0; i < n; i++)
    {
        printf(“\nEnter number %d: “, i+1);
        scanf(“%d”, &num[i]);
    }
    //now, in the next for loop, the array will be reversed and stored in a temporary array
    for(i = 0; i < n; i++)
    {
        temp_num[i] = num[n-i-1];
    }
    //now, the elements of the temporary array will be sent in the proper order to the original array
printf(“\nThe reversed array is: “);
    for(i = 0; i < n; i++)
    {
        num[i] = temp_num[i];
        printf(“ %d”, num[i]);
    }
    return 0;
}


