#include <stdio.h>
#include <stdlib.h>

int showMenu(char *menuTitle, char *menuOptions[], int menuSize, char *inputMsg);
void printMenu(char *menuTitle, char *menuOptions[], int menuSize, char *inputMsg);

int main()
{
    char title[] = "Menu";
    int menuSize = 4;
    char *menuOptions[] = {"Play", "Options", "Leaderboards", "Quit"};
    char msg[] = "Choose an option:\n";

    int choice = showMenu(title, menuOptions, menuSize, msg);
    printf("Menu choice = %d.", choice);

    return 0;
}

int showMenu(char *menuTitle, char *menuOptions[], int menuSize, char *inputMsg)
{
    int choice;

    printMenu(menuTitle, menuOptions, menuSize, inputMsg);
    while (scanf("%d", &choice) != 1 || choice < 1 || choice > menuSize || getchar() != '\n')
    {
        printMenu(menuTitle, menuOptions, menuSize, inputMsg);
        while (getchar() != '\n')
            ;
    }

    return choice;
}

void printMenu(char *menuTitle, char *menuOptions[], int menuSize, char *inputMsg)
{
    printf("\n\t%s\n", menuTitle);

    for (int i = 0; i < menuSize; ++i)
    {
        printf("%i. %s\n", i + 1, menuOptions[i]);
    }
    printf("\n%s", inputMsg);
}