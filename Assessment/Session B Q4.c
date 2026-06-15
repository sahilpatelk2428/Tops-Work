#include <stdio.h>

int main()
{
    FILE *fp;
    char goal[100];

    
    fp = fopen("goals.txt", "w");

    if(fp == NULL)
    {
        printf("File could not be opened.\n");
        return 1;
    }

    printf("Enter your daily goal: ");
    fgets(goal, sizeof(goal), stdin);

    fprintf(fp, "%s", goal);
    fclose(fp);

    
    fp = fopen("goals.txt", "r");

    if(fp == NULL)
    {
        printf("File could not be opened.\n");
        return 1;
    }

    printf("\nSaved Goal:\n");

    while(fgets(goal, sizeof(goal), fp) != NULL)
    {
        printf("%s", goal);
    }

    fclose(fp);
}
