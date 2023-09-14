#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
int i, j, num;
struct players
{
    char name[50];
    int best_bowl_fig; // best bowling figure
    int t_m; //total matches
}playr[100], temp;
void display()
{
    char playr_name[50];
    int playr_tm, playr_best_bowl_fig;
    printf("\nEnter the name of the player: ");
        scanf("%s", &playr_name);
        printf("\nEnter the total number of matches\nplayed by %s: ", playr_name);
        scanf("%d", &playr_tm);
        printf("\nEnter the best bowling figure of %s: ", playr_name);
        scanf("%d", &playr_best_bowl_fig);
        for(i = 0; i < num+1; i++)
        {
            if(i = num)
            {
                strcpy(playr[i].name, playr_name);
                playr[i].t_m = playr_tm;
                playr[i].best_bowl_fig = playr_best_bowl_fig;
            }
        }
    printf("\nThe players list is being displayed now: ");
    printf("\nName\t\tTotal Matches\tBest Bowling Figure\n");
    for(i = 0; i < num+1; i++)
    {
       printf("\n%s\t\t%d\t\t%d\n", playr[i].name, playr[i].t_m, playr[i].best_bowl_fig);
    }
}
void sort()
{
    int r_c1, r_c2;
    for(i = 0; i < num; i++)
    {
        for(j = i + 1; j < num; j++)
        {
            if(playr[i].best_bowl_fig < playr[j].best_bowl_fig)
            {
                temp = playr[i];
                playr[i] = playr[j];
                playr[j] = temp;
            }
            else if(playr[i].best_bowl_fig = playr[j].best_bowl_fig)
            {
                printf("\nIn this current comparison, both players have the same Best Bowling Figure.\n");
                printf("\nEnter the runs conceded by %s: ", playr[i].name);
                scanf("%d", &r_c1);
                printf("\nEnter the runs conceded by %s: ", playr[j].name);
                scanf("%d", &r_c2);
                if(r_c1 > r_c2)
                {
                    temp = playr[i];
                    playr[i] = playr[j];
                    playr[j] = temp;
                }
            }
        }
    }
    printf("\nThe players list is being\ndisplayed now in the descending order: ");
    printf("\nName\tTotal Matches\tBest Bowling Figure\n");
    for(i = 0; i < num; i++)
    {
         printf("\n%s\t\t%d\t\t%d\n", playr[i].name, playr[i].t_m, playr[i].best_bowl_fig);
    }
}
void Delete()
{
    char del_player[50];
    printf("\nEnter the name of the player you want\nto delete from the list: ");
    scanf("%s", del_player);
    printf("\nThe players list with the removed\nplayer is being displayed now: ");
    printf("\nName\tTotal Matches\tBest Bowling Figure\n");
    for(i = 0; i < num; i++)
    {
        if(strcmp(playr[i].name, del_player)==0)
            continue;
        else
            printf("\n%s\t\t%d\t\t%d\n", playr[i].name, playr[i].t_m, playr[i].best_bowl_fig);
    }
}
void search()
{
    char search_player[50];
    printf("\nEnter the name of the player you want\nto search from the list: ");
    scanf("%s", search_player);
    printf("\nThe statistics of the searched\nplayer are being displayed below: ");
    printf("\nName\tTotal Matches\tBest Bowling Figure\n");
    for(i = 0; i < num; i++)
    {
        if(strcmp(playr[i].name, search_player)==0)
            printf("\n%s\t\t%d\t\t%d\n", playr[i].name, playr[i].t_m, playr[i].best_bowl_fig);
        else
            continue;
    }
}
int main()
{
    int ch;
    printf("\nEnter the number of players: ");
    scanf("%d", &num);
    if(num<5)
    {
        printf("\nMinumum number of players required is 5. So the program ends.");
        exit(0);
    }
    else
    {
        for(i = 0; i < num; i++)
    {
        printf("\nEnter data for Record No. %d: ", i+1);
        printf("\nEnter the name of the player: ");
        scanf("%s", &playr[i].name);
        printf("\nEnter the total number of matches\nplayed by %s: ", playr[i].name);
        scanf("%d", &playr[i].t_m);
        printf("\nEnter the best bowling figure of %s: ", playr[i].name);
        scanf("%d", &playr[i].best_bowl_fig);
    }
    }
    printf("\nEnter '1' to insert data in array of structure.\nEnter '2' to Sort and Display.\nEnter '3' to Delete a player.\nEnter '4' to Traverse and search a player with given name.\n");
    printf("\nEnter your choice: ");
    scanf("%d", &ch);
    switch(ch)
    {
        case 1:
            display();
        break;
        case 2:
            sort();
        break;
        case 3:
            Delete();
        break;
        case 4:
            search();
        break;
        default:
            printf("\nThe number entered is invalid.");
    }
    return 0;
}