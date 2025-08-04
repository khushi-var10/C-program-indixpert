#include<stdio.h>

int main()
{
    int number;

    printf("Enter any  number: ");
    scanf("%d", &number);

    if (number < 5)
    {
        printf("This is less than number. \n");
    }
    else if (number > 5 )
    {
        printf("This is greater than number. \n");
    }
    else {
        printf("This number is equal to 5. \n");
    }
    return 0;
}