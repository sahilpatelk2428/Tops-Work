#include <stdio.h>

int main()
{
    float screenTime[7];
    float total = 0, average;
    int i;

    printf("Enter screen time for 7 days (in hours):\n");

    for(i=0;i<7;i++)
    {
        printf("Day %d: ", i + 1);
        scanf("%f", &screenTime[i]);
        total = total + screenTime[i];
    }

    average = total / 7;

    printf("\nTotal Screen Time = %.2f hours", total);
    printf("\nAverage Screen Time = %.2f hours", average);

    if(average > 6)
    {
        printf("\nWarning: Average screen time exceeds healthy limit!");
    }
    else
    {
        printf("\nGood! Your screen time is within the healthy limit.");
    }
}
