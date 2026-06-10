#include <stdio.h>

void swapPlaylistCounts(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int p1 = 20, p2 = 35;

    swapPlaylistCounts(&p1, &p2);

    printf("Playlist 1 = %d\n", p1);
    printf("Playlist 2 = %d", p2);
}

