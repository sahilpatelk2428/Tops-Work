#include<stdio.h>

int main()
{
    const float GST = 18.0;
    float amount = 2500.0;
    float finalPrice;

    finalPrice = amount + (amount * GST / 100);

    printf("Final Price = %.2f", finalPrice);
}
