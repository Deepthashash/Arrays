#include<stdio.h>

int main()
{
	int num;
	float mean;
	printf("Enter the number of numbers u are going to include\n");
	scanf("%d",&num);
	float arr[num];
	float sum=0;
	
	for(int i=0;i<num;i++)
	{
		printf("Enter the number\n");
		scanf("%f",&arr[i]);
		sum = sum + arr[i];
	}

	mean = sum/num;
	printf("mean is %.2f\n",mean);
	

}
