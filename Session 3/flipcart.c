#include<stdio.h>

int main()
{
    char productName[] = "Bluetooth Speaker";
    float price = 799.50;
    double rating = 4.4;

    printf("Product Name: %s\n", productName);
    printf("Price: %.2f\n", price);
    printf("Rating: %.1lf\n", rating);

    return 0;
}
