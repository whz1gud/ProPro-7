#include <stdio.h>
#include <stdlib.h>

int getFactorial(int number);

int main()
{
    int num, product;
    printf("Give a number:\n");
    scanf("%d", &num);

    product = getFactorial(num);
    printf("Ats = %d\n", product);

    return 0;
}

int getFactorial(int number)
{
    if (number < 0)
    {
        return 0;
    } 
    if (number <= 1)
    {
        return 1;
    }
    
    return number * getFactorial(number - 1);
}



