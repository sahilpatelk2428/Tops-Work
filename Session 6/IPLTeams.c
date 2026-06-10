#include<stdio.h>

int main()
{
    int choice=0;

    while(choice!=3)
    {
    	printf("\n1. View Teams \n2. Add Teams \n3. Exit");
        printf("\nEnter Choice: ");
        scanf("%d",&choice);

        if(choice==1)
        {
            printf("\nMI, CSK, RCB");
        }
        else if(choice==2)
        {
            printf("\nNew Team Added");
        }
        else if(choice==3)
        {
            printf("\nThank You");
        }
    }	
}
