#include<stdio.h>

int main()
{
	int arr[]={10,15,20,25,21,16};
	int x=0;
	int num; 

	for(int i=0;i<6;i++)
	{
		num=arr[i];
		for(int j=i+1;j<6;j++)
		{
			if(num==arr[j]){ 
				printf("%d is duplicated\n",num);
				x=x+1;
			}
			else continue;

		}
	}
	if(x==0)printf("No duplications found\n");
	else printf("");

	return 0;	
}
