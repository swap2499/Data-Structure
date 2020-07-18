#include<stdio.h>
int  main()
{
	int a[100],i,n,s,fl=0;
	printf("\n Enter size of  array =");
	scanf("%d",&n);
	printf("\n Enter array elements =");
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n Enter the element which you want to search =");
	scanf("%d",&s);
	for(i=1;i<=n;i++)
	{
		if(s==a[i])
		{
			fl=1;
			printf("\n Element is %d and it is found at location %d.\n",s,i);
			break;
		}
	}
	if(fl==0)
	{
		printf("\n Element not found \n");
	}
	return 0;
}
