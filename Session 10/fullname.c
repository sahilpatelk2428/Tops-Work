#include <stdio.h>
#include <string.h>

int main()
{
    char fullName[50];
    char username[50];
    int len, i;

    printf("Enter Full Name: ");
    gets(fullName);

    len = strlen(fullName);

    if(len < 5)
    {
        strcpy(username, fullName);
    }
    else
    {
        for(i = 0; i < 5; i++)
        {
            username[i] = fullName[i];
        }
        username[5] = '\0';
    }

    printf("Generated Username: %s", username);

    return 0;
}
