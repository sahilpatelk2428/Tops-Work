#include <stdio.h>

int main()
{
    int hours[7], i, total = 0;
    float average;
    FILE *fp;
    int choice;

    while(1)
    {
        printf("\n1. Enter Study Hours");
        printf("\n2. View Weekly Report");
        printf("\n3. Exit");
        printf("\nEnter Choice: ");
        scanf("%d", &choice);

        if(choice == 1)
        {
            fp = fopen("study.txt", "w");

            for(i = 0; i < 7; i++)
            {
                printf("Day %d Hours: ", i + 1);
                scanf("%d", &hours[i]);

                fprintf(fp, "%d\n", hours[i]);
            }

            fclose(fp);
            printf("Data Saved\n");
        }

        else if(choice == 2)
        {
            fp = fopen("study.txt", "r");
            total = 0;

            for(i = 0; i < 7; i++)
            {
                fscanf(fp, "%d", &hours[i]);
                total += hours[i];
            }

            fclose(fp);

            average = total / 7.0;

            printf("Total Hours = %d\n", total);
            printf("Average Hours = %.2f\n", average);
        }

        else if(choice == 3)
        {
            break;
        }
    }
}
