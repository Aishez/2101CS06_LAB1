#include <stdio.h>

double add(double a, double b)
{
    double c = a + b;
    return c;
}

double subtract(double a, double b)
{
    double c = a - b;
    return c;
}

int main()
{
    int x;
    double a, b;
    printf("Choose the operation to be performed\n1.add\n2.subrtact\n3.multiply\n4.divide\n");
    scanf("%d", &x);

    printf("Enter 2 numbers\n");
    scanf("%lf%lf", &a, &b);

    if (x == 1)
    {
        printf("%lf", add(a, b));
    }
    else if (x == 2)
    {
        printf("%lf", subtract(a, b));
    }
    else if (x == 3)
    {
        printf("%lf", multiply(a, b));
    }
    else if (x == 4)
    {
        printf("%lf", divide(a, b));
    }
    else
    {
        printf("You entered a wrong operation\n");
    }

    return 0;
}