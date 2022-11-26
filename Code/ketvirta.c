#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void generateArray(int data[], int size, int low, int high);

int main()
{
    int size, low, high;
    printf("Give size of the new array:\n");
    scanf("%d", &size);
    int data[size];
    printf("Give interval start and end for random values to be filled in the array:\n");
    scanf("%d%d", &low, &high);

    generateArray(data, size, low, high);

    for (int i = 0; i < size; i++)
    {
        printf("%d ", data[i]);
    }

    return 0;
}

void generateArray(int data[], int size, int low, int high)
{
    srand(time(NULL));

    for (int i = 0; i < size; ++i)
    {
        data[i] = rand() % (high + 1 - low) + low;
    }
}