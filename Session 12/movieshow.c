#include <stdio.h>

struct Time
{
    int hours;
    int minutes;
};

struct MovieShow
{
    char movie[50];
    int screen;
    struct Time showTime;
};

int main()
{
    struct MovieShow m = {"Pushpa 2", 3, {7, 30}};

    printf("Movie: %s\n", m.movie);
    printf("Screen: %d\n", m.screen);
    printf("Time: %02d:%02d\n",
           m.showTime.hours,
           m.showTime.minutes);
}
