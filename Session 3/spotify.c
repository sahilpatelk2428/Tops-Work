#include<stdio.h>

int main()
{
    char playlist[] = "Masterpiece Playlist";
    int songs = 28;
    float avgDuration = 4.2;

    printf("My playlist '%s' has %d songs and average duration is %.1f minutes.",
           playlist, songs, avgDuration);
}
