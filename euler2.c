 /**
  *euler2.c
  *
  *Solution for Project Euler problem 2
  *
  *Kendal Droddy
  *
  *Computes the Fib sequence up to four million
  *Tracks all even numbers of the sequence 4,613,732
  */

#include <stdio.h>

  int main(void)
  {
    //declare variables
    int i = 1;
    int j = 1;
    int fib = 1;
    int evens = 0;

    while(fib < 4000000)
    {
      if (fib % 2 == 0)
      {
        evens += fib;
      }
      fib = i + j;
      i = j;
      j = fib;
    }
      printf("%i\n", evens);
      return 0;
  }