
#include "all.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>

int main(int argc, char **argv)
{
#define NUM_VALUES 4

  printf("-- Average --\n");
  double values[NUM_VALUES] = {300.3,
                               -10.06,
                               -60000,
                               1000};

  printf("Average: %f\n", avg(values, NUM_VALUES, 1));
  printf("QAverage: %f\n", avg(values, NUM_VALUES, 2));

  return 0;
}

double avg(double *values, int num_values, int ex)
{
  double result = 0;

  for (int i = 0; i < num_values; i++)
  {
    result += pow(values[i], ex);
  }

  return result / (double)num_values;
}