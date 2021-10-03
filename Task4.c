#include <stdio.h>
//Task 4 from meeting 3 file

int addDigit (int a, int b);

int main(void)
{
    int a,b;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    printf("%d+%d=%d", a,b,addDigit(a,b));

    return 0;
}
int addDigit (int a, int b)
{
    int sum;
    sum=a+b;

    return sum;
}
