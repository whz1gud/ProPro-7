#include <stdio.h>
#include <stdlib.h>

int getPositiveNumber(char *msg);

int main()
{
    char message[] = "Give a positive integer:\n";
    int a = getPositiveNumber(message);
    printf("positive integer = %d", a);
    return 0;
}

int getPositiveNumber(char *msg)
{
    int num;
    printf("%s", msg);
    while (scanf("%d", &num) != 1 || num <=0 || getchar() != '\n')
    {
        printf("%s", msg);
        while (getchar() != '\n')
            ;
    }
    return num;
}
