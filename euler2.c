 /**
  *euler2.c
  *
  *Solution for Project Euler problem 2
  *
  *Kendal Droddy
  *
  *Computes the Fib sequence up to four million
  *Tracks all even numbers of the sequence
  */

#include <stdio.h>

  int main(void)
  {
    //declare variables
    int counter = 0;
    int evens = 0;

    for (int i = 1; i <= 4000000 ; i += counter)
    {
      if (i % 2 == 0)
      {
        evens += i;
        counter+= i;
      }
      else if (counter % 2 == 0)
      {
        evens += counter;
        counter += i;
      }
      else
      {
      counter += i;
      }

      printf("%i, %i, %i\n", i, evens, counter);
    }
  }