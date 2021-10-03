#include <stdio.h>
//Task_2 from meeting3 file.

int main()
{
    int uncii=8, inputUncii=0, glasses=0;
    printf("Please enter amount of UNC: ");
    scanf("%d", &inputUncii);
    glasses=inputUncii/uncii;
    printf("You will recieve %d", glasses);

    return 0;
}
