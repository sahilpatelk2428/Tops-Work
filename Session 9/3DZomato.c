#include <stdio.h>

int main()
{
    int orders[7] = {100, 260, 350, 290, 140, 320, 200};
    int i, sum = 0;
    float avg;

    for(i = 0; i < 7; i++)
    {
        sum += orders[i];
    }

    avg = sum / 7.0;

    printf("Average Amount = %.2f", avg);
}

