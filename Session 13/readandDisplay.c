#include <stdio.h>

int main()
{
    FILE *fp;
    char song[50];

    fp = fopen("playlist.txt", "r");

    while(fgets(song, sizeof(song), fp) != NULL)
    {
        printf("%s", song);
    }

    fclose(fp);
}
