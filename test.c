#include<stdio.h>
#include<stdlib.h>
void main(int argc, char * argv[]) {
   int i,a,b, sum = 0,diff=0,prod=0;
 
   if (argc != 3) 
	{
      	printf("You have forgot to type numbers.");
      	exit(1);
   	}
   for (i=1;i<argc;i++)
	{	
   	a=atoi(argv[1]);
   	b=atoi(argv[2]);
	}
   sum = a + b;
   printf("The sum is :%d \n",sum);
   diff = a - b;
   printf("\nDifference of the entered numbers:%d\n",diff);
   prod = a * b;
   printf("\nProduct of the entered numbers:%d\n",prod);
 
}


