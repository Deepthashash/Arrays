#include<stdio.h>

int main()
{
	int num;
	printf("Enter the number of numbers u are going to include\n");
	scanf("%d",&num);
	int arr[num];
	
	for(int i=0;i<num;i++)
	{
		printf("Enter the number\n");
		scanf("%d",&arr[i]);
	}
	
	int max=arr[0];

	for(int j=1;j<num;j++)
	{
		if(max>arr[j])
		{
			continue;
		}
		else
		{
			max = arr[j];
		}
	}
	
	int max2;
	if(arr[0]=max) max2=arr[1];
	else max2=arr[0];

	for(int l=0;l<num;l++)
	{
		if(arr[l]==max)
		{
			continue;
		}
		else
		{
					
			if(max2>arr[l])
			{
				continue;
			}
			else
			{
				max2 = arr[l];
			}
		}
	}

	printf("2nd max num is %d\n",max2);
	
	return 0;
}
	
