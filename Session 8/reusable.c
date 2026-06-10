#include <stdio.h>
#include <ctype.h>

void capitalize(char str[])
{
    str[0] = toupper(str[0]);
    printf("%s\n", str);
}

int main()
{
    char product[] = "laptop";
    char username[] = "sahil";

    capitalize(product);
    capitalize(username);
}
