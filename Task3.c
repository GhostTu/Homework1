#include <stdio.h>
// TASK_3 from meeting 3 file.

int main()
{
int daysOnEarth=0, yearJupiter=12, daysOfYear=365;
float yearOnJupiter, bellowDays;
printf("Please enter amount of earth days:");
scanf("%d", &daysOnEarth);
yearOnJupiter=daysOnEarth/(yearJupiter*daysOfYear);
if (daysOnEarth<365)
{
    bellowDays=daysOnEarth/yearJupiter;
    printf("Days on the Jupiter %2f", bellowDays);
}
else
{
printf("Amount of year on Jupiter will be %.10f", yearOnJupiter);
}

 return 0;
}
