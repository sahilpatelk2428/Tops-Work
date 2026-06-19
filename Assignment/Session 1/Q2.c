#include<stdio.h>
#include<string.h>

char tasks[5][50];

void markTaskDone(int index)
{
    strcat(tasks[index], " - DONE");
}

int main()
{
    strcpy(tasks[0], "Study");
    strcpy(tasks[1], "Project");
    strcpy(tasks[2], "Exercise");

    markTaskDone(1);

    for(int i=0;i<3;i++)
    {
        printf("%s\n", tasks[i]);
    }
}

