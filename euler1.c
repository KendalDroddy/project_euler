 /**
  *Euler1.c
  *
  *Solution for Project Euler problem 1
  *
  *Kendal Droddy
  *
  *Checks numbers between 1 & 1000 for multiples of 3 & 5
  *Tracks the cumulative total of these multiples
  */

#include <stdio.h>

int main(void)
{

//counter tracks the cumulative sum of multiples of 3 & 5
int counter = 0;

  //iterates through each value checking for multiples of 3 or 5
  for (int i = 0; i < 1000; ++i)
  {
      if(i % 3 == 0 || i % 5 == 0)
    {
      counter += i;
    }
  }
  //print the result
  printf("%i\n", counter);

}
