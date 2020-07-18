#include<stdio.h>
void main()
{
	struct employee
	{
		int id;
		int sal;
	};
	struct employee e1,e2;
	printf("\n Enter id and salary =");
	scanf("%d%d",&e1.id,&e1.sal);
	scanf("%d%d",&e2.id,&e2.sal);
	printf("\n You Entered =");
	printf("\n%d  %d",e1.id,e1.sal);
	printf("\n%d  %d",e2.id,e2.sal);
}
