#include <stdio.h>

int main(void)
{
	int userNumber = 1;
	int follNumber = 0;
	// just to see changes
	printf("\n pliz clik a number:\n");
	follNumber = scanf("%d", &userNumber);
	
	if(userNumber>=0)
	{
		printf ("the foll number is:%d\n",userNumber);
	}
	else
	{
		printf("the foll number is:%d \n", userNumber*-1);
	}


	
	return(0);

	
}
