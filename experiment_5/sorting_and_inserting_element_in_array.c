#include<stdio.h>
int main()
{
    int num[100], n, i, j, temp;
    int ins_num, pos_num, new_num[100];
    printf(“\nEnter the number of elements: “);
    scanf(“%d”, &n);
    for(i = 0; i < n; i++)
    {
        printf(“\nEnter number %d: “, i+1);
        scanf(“%d”, &num[i]);
    }
    printf(“\nThe array sorted in the descending order is as follows:”);
    for(i = 0; i < n; i++)
    {
        for(j = (i+1); j < n; j++)
        {
            if(num[i]<num[j])
            {
                temp = num[i];
                num[i] = num[j];
                num[j] = temp;
            }
        }
        printf(“ %d”, num[i]);
    }
    printf(“\nThe array sorted in the ascending order is as follows:”);
    for(i = 0; i < n; i++)
    {
        for(j = (i+1); j < n; j++)
        {
            if(num[i]>num[j])
            {
                temp = num[i];
                num[i] = num[j];
                num[j] = temp;
            }
        }
        printf(“ %d”, num[i]);
    }
    //now, the elements of first array, which is sorted in the ascending order,
    //will be transferred, in the same order, to a new array so that the element
    //insertion operation occurs seamlessly.
    for(i = 0; i < n; i++)
    {
        new_num[i] = num[i];
    }
    printf(“\nEnter the number to be added to the array: “);
    scanf(“%d”, &ins_num);
    //determining the correct position of the entered number
    for(i = 0; i < n; i++)
    {
        if(ins_num < new_num[i])
        {
            pos_num = i;
            break;
        }
        else
        {
            pos_num = i + 1;
        }
    }
    //shifting the elements greater than the entered element to the right
    //so as to make space for the entered element.
    for(i = (n+1); i >= pos_num; i--)
    {
        new_num[i+1] = new_num[i];
    }
    //insert entered number in the correct place
    new_num[pos_num] = ins_num;
    //print the modified array
    for(i = 0; i <= n; i++)
    {
        printf(“ %d”, new_num[i]);
    }
}
