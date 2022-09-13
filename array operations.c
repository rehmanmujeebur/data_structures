#include<stdio.h>
int main()
{
	int array[10],a,num,i,pos;
	printf("how many elements did you like to insert:");
	scanf("%d",&num);
	printf("Enter 1 to Insert Elements to array \n2 to Delete Elements \n3 to display");
	scanf("%d",&a);
	if(a==1)
	{
		printf("enter the elements:");
		for(i=0;i<num;i++)
		{
			scanf("%d",&array[i]);
		}
		printf("Insertion successfully completed");
	}
	else if(a==2)
	{
		printf("enter the postion of element you like to remove:");
		scanf("%d",&pos);
		for(i=pos-1;i<=num-1;i++)
		{
			array[i]=array[i+1];
		}
		printf("deletion successfully");
	}
	else if(a==3)
	{
		printf("elements in a array\n");
		
		for(i=0;i<num;i++)
		{
			printf("%d",array[i]);
		}
	}
}
