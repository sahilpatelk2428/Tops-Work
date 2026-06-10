#include <stdio.h>

void increFlwrsByValue(int followers)
{
    followers = followers + 1000;
}

void increFlwrsByRef(int *followers)
{
    *followers = *followers + 1000;
}

int main()
{
    int followers = 5000;

    increFlwrsByValue(followers);
    printf("After Value: %d\n", followers);

    increFlwrsByRef(&followers);
    printf("After Reference: %d\n", followers);
}
