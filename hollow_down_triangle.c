// write a c code oto print the holow tringale 
#include<stdio.h>
void
main ()
{
  int n = 5;
  for (int i = 0; i < n; i++)
	{
	  for (int j = 0; j < 2 * (n - i) - 1; j++)
		{
		  printf (" ");
		}
	  for (int k = 0; k < 2 * i + 1; k++)
		{
		  if (k == 0 || k == 2 * i || i == n - 1)
			{
			  printf ("* ");
			}
		  else
			{
			  printf (" ");
			}
		}
	  printf ("\n");
	}
}
