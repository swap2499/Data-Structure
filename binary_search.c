#include<stdio.h>
int main()
{
	int a[100],i,low,high,mid,n,s;
	printf("\n Enter size of array =");
	scanf("%d",&n);
	printf("\n Enter array element in ordered format =");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n Enter Searching element =");
	scanf("%d",&s);
	low=0;
	high=n-1;
	mid=(low+high)/2;
	while(low<=high)
	{
		if(s>a[mid])
		low=mid+1;
		else if(s==a[mid])
		{
		printf("\n Search Found at location %d.\n\n",mid+1);
		break;
		}
		else
		high=mid-1;
		
		mid=(low+high)/2;
	}
	if(low>high)
	printf("\n Search Not Found \n\n");
	return 0;
}

