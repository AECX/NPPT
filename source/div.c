
#include "all.h"

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main(int argc, char **argv)
{
    printf("-- Division --\n");

    double a, b;

    printf("Divide: ");
    scanf("%lf", &a);

    printf("By: ");
    scanf("%lf", &b);

    printf("\nResult: %e\n", divide(a, b));

    return 0;
}

double divide(double a, double b)
{
    // Return a/b if b isn't 0; otherwise 0
    return (b != 0) ? (a / b) : 0;
}