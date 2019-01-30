#include<stdio.h>
main()
{
	int a[10],b[10],i,j,m,n,min;
	printf("Enter the size:");
	scanf("%d",&n);
	printf("Enter the array:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		int pos=0,count=0;
		for(j=0;j<n;j++)
		{
			if(i==j)
			{
				printf("");
			}
			else
			{
				if(a[i]<a[j])
				{
					count++;
					b[pos]=a[j];
					pos++;
				}
				
			}
		}
		if(count>1)
		{
			min=b[0];
			for(m=1;m<pos;m++)
			{
				if(b[m]<min)
				{
					min=b[m];
				}
			}
			printf("next biggest value of %d is %d:\n",a[i],min);
		}
		else if(count==0)
		{
			printf("nothing is %d\n",a[i]);
		}
		else if(count==1)
		{
			printf("next biggest value of %d is %d:\n",a[i],b[pos-1]);
		}
	}
}
