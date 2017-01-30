/*
	Program : WAP to declare aaray of 10 elements and search an element
			  to print whether it exist or not.
*/

#include<stdio.h>
int main()
{
	int a[10],i,n;
	
	for (i=0;i<10;i++)
	{
		printf("Enter the number : ");
		scanf("%d",&a[i]);
		
	}
	
	printf("\nEnter the number you want to search : ");
	scanf("%d",&n);
	
	for(i=0;i<10;i++)
	{
			if(n==a[i])
			{
				printf("\nThe number is found");
				break;
			}
		
	}
	if(i==10)
	printf("\nThe number is not found");
return 0;
}					
			   
