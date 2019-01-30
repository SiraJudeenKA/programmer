#include<stdio.h>
main()
{
	int i,j,z;
	char s[20];
	printf("Enter the name:\n");
	scanf("%s",s);
	for(i=0;s[i]!='\0';i++)
	{
		int count=0;
		if(i==0)
		{
			printf("%c",s[i]);
		}
		else
		{
			for(j=0;j<i;j++)
			{
				if(s[i]==s[j])
				{
					count++;
				}
			}
			if(i<=j)
			{
				if(count>0)
				{
					if(count%2==0)
					{
						printf("%c",s[i]);
					}
				}
				else
				{
					printf("%c",s[i]);
				}
			}
		}
	}
}
