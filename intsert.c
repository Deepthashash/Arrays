#include<stdio.h>

int main()
{
	int arr[8]={1,5,10,8,9,15,8};
	int loc;
	int x;
	printf("enter the location\n");
	scanf("%d",&loc);
	x = loc-2;
	
	
	for(int i=7;i>x;i--)
	{
		arr[i]=arr[i-1];
	}
	
	printf("Enter the value\n");
	scanf("%d",&arr[loc-1]);
	
	for(int j=0;j<8;j++)
	{
		printf("%d ",arr[j]);
	}
	printf("\n");
	return 0;
	

	
}
