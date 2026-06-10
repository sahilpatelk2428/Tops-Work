#include <stdio.h>
#include <string.h>

void addToCart(char cart[][20], int *count, const char *product)
{
    int i;

    strcpy(cart[*count], product);
    (*count)++;

    printf("Updated Cart:\n");
    for(i = 0; i < *count; i++)
    {
        printf("%d. %s\n", i + 1, cart[i]);
    }
}

int main()
{
    char cart[10][20];
    int count = 0;
    int i;

    addToCart(cart, &count, "Laptop");
    addToCart(cart, &count, "Mouse");

    printf("\nCart in Main Function:\n");
    for(i = 0; i < count; i++)
    {
        printf("%d. %s\n", i + 1, cart[i]);
    }
}
