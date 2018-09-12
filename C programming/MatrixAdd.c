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
        
        int a[10][10],b[10][10], i, j;
      int r1 = atoi (argv[1]);
      int c1 = atoi (argv[2]);
      int x=3;
      for (i = 0; i < r1; i++)
	    {
    	  for (j = 0; j < c1; j++)
    	    {
    	      a[i][j] = atoi (argv[x]);
    	      x++;
    	      
    	    }
	    }
      int r2 = atoi (argv[x]);
      int c2 = atoi (argv[++x]);
      
      for (i = 0; i < r2; i++)
	    {
    	  for (j = 0; j < c2; j++)
    	    {
    	      b[i][j] = atoi (argv[++x]);
    	      
    	      
    	    }
	    }

     
            for (i = 0; i < r1; i++)
	    {
    	  for (j = 0; j < c1; j++)
    	    {
    	      printf("%d",a[i][j]); 
    	      
    	    }
    	    printf("\n");
	    }
	    
	     printf("\n");
	    
	    for (i = 0; i < r2; i++)
	    {
    	  for (j = 0; j < c2; j++)
    	    {
    	     printf("%d",b[i][j]);  
    	      
    	    }
    	     printf("\n");
	    }
	    printf("Sum is \n \n");
	    int c=0;
	    for (i = 0; i < r2; i++)
	    {
    	  for (j = 0; j < c2; j++)
    	    {
    	        c=a[i][j]+b[i][j];
    	     printf("%d",c);  
    	      
    	    }
    	     printf("\n");
	    }
	    
	    
     
     
      return 0;
    }
}
