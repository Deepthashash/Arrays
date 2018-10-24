#include<stdio.h>

int main()
{
	int arr[]={2,5,8,10,12,45,9,10};
	int s = sizeof(arr)/sizeof(arr[0]);
	int pos;
	int x;
	printf("Enter the position: \n");
	scanf("%d",&pos);
	x = pos-1;
	
	if(pos==8) 
	{
		for(int i=0;i<s-1;i++)
		{
			arr[i]=arr[i];
		}
	}
	else
	{
		for(int j=x;j<s-1;j++)
		{
			arr[j]=arr[j+1];
		}
	}
	
	for(int l=0;l<s-1;l++)
	{
		printf("%d ",arr[l]);
	}	
	
	printf("\n");
	
	return 0;
}
