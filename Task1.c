#include <stdio.h>

// Task_1 from meeting3 file

int main()
{
    float weightOnEarth ,massOnMoon;
    printf("Enter your mass: ");
    scanf("%f", &weightOnEarth);
    massOnMoon=0.17*weightOnEarth;
    printf("Your mass on the moon will be: %.2f", massOnMoon);
    return 0;
}
