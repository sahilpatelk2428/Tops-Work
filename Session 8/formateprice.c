#include <stdio.h>

void formatPrice(int price)
{
    printf("Price: Rs.%d\n", price);
}

int main()
{
    formatPrice(1599);
    formatPrice(2499);
    formatPrice(999);
}
