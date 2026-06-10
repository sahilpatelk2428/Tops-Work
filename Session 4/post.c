#include<stdio.h>

int main()
{
    int likes = 1200;
    int comments = 250;
    int shares = 60;

    if(likes >= 1000 || (comments > 200 && shares >= 50))
    {
        printf("Post is Trending");
    }
    else
    {
        printf("Post is Not Trending");
    }
}
