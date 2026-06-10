#include <stdio.h>

int main()
{
    FILE *fp;

    fp = fopen("playlist.txt", "a");

    fprintf(fp, "Tera Ho Jaun\n");
    fprintf(fp, "Tera Hone Laga Hoon\n");

    fclose(fp);
}

