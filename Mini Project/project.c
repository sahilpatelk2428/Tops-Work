#include <stdio.h>
#include <stdlib.h>

int main()
{
    int music[7] = {0};
    int choice, i;
    int total, highest;
    float average;
    FILE *fp;
    char confirm;

    while(1)
    {
        printf("\n===== Music Listening Logger =====\n");
        printf("1. Log Daily Minutes\n2. View Weekly Report\n3. Reset Data\n4. Exit\n ");
        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                fp = fopen("music_log.txt", "w");

                for(i=0;i<7;i++)
                {
                    printf("Day %d Minutes: ", i + 1);
                    scanf("%d", &music[i]);

                    fprintf(fp, "%d\n", music[i]);
                }

                fclose(fp);
                printf("Data Saved Successfully!\n");
                break;

            case 2:
                fp = fopen("music_log.txt", "r");

                if(fp == NULL)
                {
                    printf("No Data Found!\n");
                    break;
                }

                total = 0;
                highest = 0;

                for(i=0;i<7;i++)
                {
                    fscanf(fp, "%d", &music[i]);

                    total+=music[i];

                    if(music[i]>highest)
                        highest=music[i];
                }

                average=total/7.0;

                printf("\nWeekly Report\n");
                printf("Total Minutes = %d\n", total);
                printf("Average Minutes = %.2f\n", average);
                printf("Highest Minutes = %d\n", highest);

                fclose(fp);
                break;

            case 3:
                printf("Are you sure? (Y/N): ");
                scanf(" %c", &confirm);

                if(confirm=='Y' || confirm=='y')
                {
                    for(i = 0;i<7;i++)
                        music[i]=0;

                    fp = fopen("music_log.txt", "w");
                    fclose(fp);

                    printf("Data Reset Successfully!\n");
                }
                break;

            case 4:
                printf("Thank You!\n");
                return 0;

            default:
                printf("Invalid Choice!\n");
        }
    }
}
