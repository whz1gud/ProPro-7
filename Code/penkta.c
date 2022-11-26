#include <stdio.h>
#include <stdlib.h>

long getFileSize(char *fileName);

int main()
{
    char filename[] = "file.txt";

    printf("Size of file = %ld bytes", getFileSize(filename));
    return 0;
}

long getFileSize(char *fileName)
{
    FILE *fp;
    fp = fopen(fileName, "rb");
    long size;

    if (fp != NULL)
    {
        fseek(fp, 0, SEEK_END);
        size = ftell(fp);
        fclose(fp);
        return size;
    }
    else
        return -1;
}
