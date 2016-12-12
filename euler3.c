 /**
  *euler3.c
  *
  *Solution for Project Euler problem 3
  *
  *Kendal Droddy
  *
  *Computes the largest prime factor of 13,195
  *
  */

#include <stdio.h>

int main(void)
{
	int n = 13195;

	for(int i = 2; i < n, i++)
	{
		if(n % i == 0)
		{
			for(int k = 2; k < i; k++)
			{
				if (i % k != 0)
				{
					printf("%i\n", i );
				}
			}
		}
	}








	return 0;
}