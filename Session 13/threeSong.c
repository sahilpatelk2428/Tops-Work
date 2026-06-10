#include <stdio.h>

int main()
{
    FILE *fp;

    fp = fopen("playlist.txt", "w");

    fprintf(fp, "Rabba\n");
    fprintf(fp, "Aayyi nahi\n");
    fprintf(fp, "Tum Se\n");

    fclose(fp);
}

