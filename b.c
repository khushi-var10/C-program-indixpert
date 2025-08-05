#include <stdio.h>

int main()
{
    int number;
    printf("Please enter any number:");
    scanf("%d", &number);

    if (number > 10)

    {
        if (number > 0)
        {
            if (number % 2 == 0)
            {
                printf("This is Even Number: ");
            }
            else
            {
                printf("This is Odd Number: ");
            }
        }
        else
        {
            printf("Please enter valid number");
        }
    }
    
    return 0;
}
