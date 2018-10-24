#include<stdio.h>

int main()
{
	int arr[]={1,2,4,5,9,10,11,15};
	int x=sizeof(arr)/sizeof(arr[0]);
	int num;		
	printf("Enter the number you want to include:\n");
	scanf("%d",&num);

	for(int i=0;i<x;i++)
	{
		if(arr[i]>num)
		{
			for(int j=x;j>i-1;j--)
			{
				arr[j]=arr[j-1];
			}
			arr[i]=num;
			break;
		}
		else  
		{
			if(arr[x-1]>num) continue;
			else arr[x]=num;	
		}
	}
	
	for(int l=0;l<=x;l++)
	{
		printf("%d ",arr[l]);
	}
	printf("\n");

	return 0;	
	
}
