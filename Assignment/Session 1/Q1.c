#include<stdio.h>

char tasks[5][50];
int count = 0;

int main()
{
    printf("Enter 5 tasks:\n");

    for(int i=0;i<5;i++)
    {
        scanf(" %[^\n]", tasks[i]);
        count++;
    }

    printf("\nTask List:\n");

    for(int i=0;i<count;i++)
    {
        printf("%d. %s\n", i+1, tasks[i]);
    }
}

