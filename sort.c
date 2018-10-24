#include<stdio.h>

int main()
{
	int arr[]={12,13,5,4,8,7,9,10,18};	
	int temp;
	for(int i=0;i<8;i++)
	{
		temp=arr[i];
		for(int j=i+1;j<9;j++)
		{
			if(temp>arr[j])	
			{
				arr[i]=arr[j];
				arr[j]=temp;
				temp=arr[i];
			}
			else continue;
		}
	}

	for(int l=0;l<9;l++)
	{
		printf("%d ",arr[l]);
	}
	printf("\n");

	return 0;	
	
}
