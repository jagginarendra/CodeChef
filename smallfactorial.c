// Program to find factorial of small numbers like 100

#include<stdio.h>

int main()
{
	int N,t;
	scanf("%d",&t);
	while(t--)
	{
	scanf("%d",&N);
	int array[200]={1};
	int i=1,m=1,k=0,x=0,temp=0;
	while(i<=N)
	{
		k=0;
		while(k<m)
		{
			x= array[k]*i+temp;
			array[k] = x%10;
			temp = x/10;
			k++;
		}
		while(temp>0)
		{
			int temp1 = temp % 10;
			m++;
			array[k++]= temp1;
			temp = temp/10;
		}
		i++;
	}
	
	for(i=m-1;i>=0;i--)	
	{
		
		printf("%d",array[i]);	
	}
	printf("\n");	
	}	
	return 0;
}
