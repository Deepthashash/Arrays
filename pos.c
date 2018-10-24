#include<stdio.h>

int main()
{
	int num;
	int pos=1;
	printf("Enter the number of numbers u are going to include\n");
	scanf("%d",&num);
	int arr[num];
	
	
	for(int i=0;i<num;i++)
	{
		printf("Enter the number\n");
		scanf("%d",&arr[i]);
	}
	
	int min=arr[0];

	for(int j=0;j<num;j++)
	{
		if(arr[j]>min) continue;
		else{
			min = arr[j];
			pos = j+1;
		}
	}

	printf("The position of the smallest number is %d\n",pos);
	

	

}
