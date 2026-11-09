#include <stdio.h>

int main(void)
{
    int number;
    scanf("%d", &number);
    if (number < 0)
    {
        printf("Error");
        return 0;
    }
    if (number == 0)
    {
        printf("No");
        return 0;
    }
    if (number % 3 == 0)
        printf("Up");
    if (number % 5 == 0)
        printf("Go");
    if (number % 7 == 0)
        printf("!!");
    if (number % 3 != 0 && number % 5 != 0 && number % 7 != 0)
        printf("No");
    return 0;
}
