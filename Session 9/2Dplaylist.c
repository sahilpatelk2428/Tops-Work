#include <stdio.h>

int main()
{
    int playlistRatings[3][5] = {
        {2, 9, 4, 3, 2},
        {3, 5, 7, 6, 8},
        {2, 1, 4, 5, 7}
    };

    int i;

    printf("Second Playlist Ratings:\n\n");

    for(i = 0; i < 5; i++)
    {
        printf("%d ", playlistRatings[1][i]);
    }
}

