#include<stdio.h>
#include<string.h>
int main()
{
	char str[102];
	int t,count=0,i=0;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%s",str);
		count = i = 0;		
		while(str[i] != '\0')
		{
			if(str[i]=='A' ||  str[i]=='D' || str[i]=='O' || str[i]=='P' || str[i]=='Q' || str[i]=='R' )
				count++;
			else if(str[i]=='B')
				count+=2;
			i++;
		}
		printf("%d\n",count);
	
	}		
	return 0;
}
