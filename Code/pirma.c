#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int isInRange(int number, int low, int high);

int main()
{
    int number, low, high;
    bool inRange;
    printf("Give a number:\n");
    scanf("%d", &number);
    printf("Give interval start and end:\n");
    scanf("%d%d", &low, &high);

    inRange = isInRange(number, low, high);

    printf("%d", inRange);

    return 0;
}

int isInRange(int number, int low, int high)
{
    if (number >= low && number <= high && low <= high)
    {
        return true;
    }
    return false;
}