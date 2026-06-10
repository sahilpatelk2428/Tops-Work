#include<stdio.h>

int main()
{
    int choice;

    printf("1.Breakfast\n2.Lunch\n3.Dinner\n4.Snack\n");
    printf("Enter Choice: ");
    scanf("%d",&choice);

    switch(choice)
    {
        case 1:
            printf("Poha");
            break;
        case 2:
            printf("Dal Rice");
            break;
        case 3:
            printf("Paneer Curry");
            break;
        case 4:
            printf("Sandwich");
            break;
        default:
            printf("Try some fruits!");
    }
}
