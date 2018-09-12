/*Given an n-by-n matrix of 0’s and 1’s where all 1’s in each row come before all 0’s, find the most efficient way to return the row with the maximum number of 0’s.*/


#include<stdio.h>
#include<stdlib.h>

int
main (int argc, char *argv[])
{
  if (argc == 1)
    {
      printf ("no arguments");

    }
  else
    {
      int r = atoi (argv[1]);
      int c = atoi (argv[2]);
      int a[10][10], i, j;
      int x = 3;

      for (i = 0; i < r; i++)
	{
	  for (j = 0; j < c; j++)
	    {
	      a[i][j] = atoi (argv[x]);
	      x++;
	    }
	}
      int row;
      i = 0;
      j = c - 1;
      while (i < r && j > 0)
	{
	  if (a[i][j] == 0)
	    {
	      j--;
	      row = i;
	    }
	  else
	    i++;
	}
      printf ("%d", row);
      return 0;
    }
}
