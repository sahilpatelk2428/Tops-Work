#include <stdio.h>

void incrementFollowers(int *followers, int n)
{
    int i;

    for(i = 0; i < n; i++)
    {
        *(followers + i) += 100;
    }
}

int main()
{
    int followers[5] = {1400, 1600, 1800, 1900, 2100};
    int i;

    incrementFollowers(followers, 5);

    for(i = 0; i < 5; i++)
    {
        printf("%d ", followers[i]);
    }
}

