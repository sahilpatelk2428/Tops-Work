#include <stdio.h>

int main()
{
    int hours;

    printf("Enter hours studied today: ");
    scanf("%d", &hours);

    if(hours >= 8)
    {
        printf("Excellent! Keep up the hard work.\n");
    }
    else if(hours >= 5)
    {
        printf("Good job! You are doing well.\n");
    }
    else if(hours >= 2)
    {
        printf("Keep studying, you can do better.\n");
    }
    else
    {
        printf("Study more today to reach your goals.\n");
    }
}
