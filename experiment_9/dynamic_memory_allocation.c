#include<stdio.h> 
#include<stdlib.h> 
struct school 
{ 
    int roll_num;
    char name[100]; 
}; 
void main() 
{ 
    int stu, ext_stu, tot_stu, i, ch; 
    printf("\nThis is the Students List of Class 12A."); 
    printf("\nEnter the number of student data to be entered: "); 
    scanf("%d", &stu); 
    struct school *sch_ptr; 
    sch_ptr = (struct school*)malloc(stu*sizeof(struct school)); 
    if(sch_ptr==NULL){ 
        printf("\nMemory allocation using Malloc was unsuccessful.");  
        exit(0); 
    } else { 
        printf("\nMemory allocation using Malloc was successful."); 
        for(i = 0; i < stu; i++) 
        { 
            printf("\nFor Sr. No. %d:", i+1); 
            printf("\nRoll No.: "); 
            scanf("%d", &(sch_ptr+i)->roll_num); 
            printf("\nName: "); 
            scanf("%s", (sch_ptr+i)->name); 
        } 
    } 
    printf("\nEnter:\n'1' to insert student data\n'2' to delete the student data\n'3' to display  the student list\nEnter choice: "); 
    scanf("%d", &ch); 
    switch(ch) 
    { 
        case 1: 
        printf("\nEnter the number of extra data to be added: "); 
        scanf("%d", &ext_stu); 
        int orig_stu = stu; 
        tot_stu = stu + ext_stu; 
        sch_ptr = realloc(sch_ptr, tot_stu*sizeof(struct school)); 
        if(sch_ptr==NULL){ 
            printf("\nMemory allocation using Malloc was unsuccessful.");  exit(0); 
        } else { 
            printf("\nMemory allocation using Malloc was successful.");  printf("\nNow enter the students' data: "); 
            for(i = orig_stu; i < tot_stu; i++) 
            { 
                printf("\nFor Sr. No. %d:", i+1);
                printf("\nRoll No.: "); 
                scanf("%d", &(sch_ptr+i)->roll_num); 
                printf("\nName: "); 
                scanf("%s", (sch_ptr+i)->name); 
            } 
        } 
        printf("\nThe Final List is being displayed now: "); 
        printf("\nSr. No.\tRoll No.\tName\n"); 
        for(i = 0; i < tot_stu; i++) 
            printf("%d\t%d\t\t%s\n", i+1, (sch_ptr+i)->roll_num, (sch_ptr+i)->name);  
        break; 
        case 2: 
        free(sch_ptr); 
        printf("\nThe Memory allocated to the pointer ''sch_ptr'', which is\na pointer to  the structure ''school'' containing data\nmembers ''roll_num'' and ''name[100]'', has been successfully freed.\n"); 
        exit(0); 
        break; 
        case 3: 
        printf("\nThe Original List is being displayed now: "); 
        printf("\nSr. No.\tRoll No.\tName\n"); 
        for(i = 0; i < stu; i++) 
            printf("%d\t%d\t\t%s\n", i+1, (sch_ptr+i)->roll_num, (sch_ptr+i)->name);  
        break; 
        default: 
            printf("\nPlease enter either '1', '2' or '3' only and try again!");  exit(0); 
    } 
} 
