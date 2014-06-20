#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>
    	  		 	
	
#define CHICKEN 14
       	    		
	
void chikin(void);
       	     	
	
void moreChikin(void);
       	 		 	
	

int main(int argc, char** argv)
{
	srand(time(NULL));
      		 			
	
	char chicken[CHICKEN][CHICKEN/2 + 1] = {"Chicken", "Chicken", "Chicken", "Chicken", "Chicken", "Chicken", "Chicken", "Chicken", "Chicken", "Chicken", "Chicken", "Chicken", "Chicken", "Chicken"};
      		  		
	
	while(CHICKEN)
	{
		for(int Chicken = 0; Chicken < CHICKEN; Chicken++)
		{
			printf("%s", chicken[Chicken]);
		}
      	   		 
	
	chikin();
     			  	
	
	}
      	    		
	
	return(0);
}

void chikin(void)
{
	int cheeken = rand();
      	    	 
	
	int chickEn = CHICKEN;
       		   	
	
	chickEn = CHICKEN + CHICKEN;
       		  	 
	
	chickEn += CHICKEN * CHICKEN;

	chickEn = chickEn % CHICKEN;
  


	if(chickEn % cheeken == 0)
	{
		printf("%s", "Chicken");
	}
	else
	{
		printf("%s", "ROOSTER");
	}
}