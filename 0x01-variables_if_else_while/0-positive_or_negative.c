#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *  * main - Entry point
 *   *
 *    * Return: Always 0 (Success)
 **/
int main(void)
{
  // Initialize random seed
  srand(time(NULL));
  
  // Generate a random number and store it in n
  int n = rand() - RAND_MAX / 2;

  // Print the number and whether it is positive, negative, or zero
  printf("The number is %d and it is ", n);
  if (n > 0)
  {   
    printf("positive.\n");
  }
  else if (n == 0)
  {
    printf("zero.\n");
  }
  else
  {
    printf("negative.\n");
  }

 return (0);
}
